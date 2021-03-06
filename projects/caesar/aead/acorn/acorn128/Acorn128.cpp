#include "Acorn128.h"
#include "acorn128_encrypt.h"
#include "../../common/api.h"
#include "EACglobals.h"

Acorn128::Acorn128(int numRounds)
    : CaesarInterface(CAESAR_ACORN128, numRounds, CRYPTO_KEYBYTES, CRYPTO_NSECBYTES, CRYPTO_NPUBBYTES, CRYPTO_ABYTES) {
    if (numRounds < -1 || numRounds > maxNumRounds) {
        mainLogger.out(LOGGER_WARNING) << "Weird number of rouds (" << numRounds << ") for " << shortDescription() << endl;
    }
    if (numRounds == -1) {
        Acorn128_raw::numRounds = maxNumRounds;
        CaesarCommon::numRounds = maxNumRounds;
    } else {
        Acorn128_raw::numRounds = m_numRounds;
        CaesarCommon::numRounds = m_numRounds;
    }
}

Acorn128::~Acorn128() { }

int Acorn128::encrypt(bits_t *c, length_t *clen, const bits_t *m, length_t mlen,
                       const bits_t *ad, length_t adlen, const bits_t *nsec, const bits_t *npub,
                       const bits_t *k) {
    return Acorn128_raw::crypto_aead_encrypt(c, clen, m, mlen, ad, adlen, nsec, npub, k);
}

int Acorn128::decrypt(bits_t *m, length_t *outputmlen, bits_t *nsec,
                       const bits_t *c, length_t clen, const bits_t *ad, length_t adlen,
                       const bits_t *npub, const bits_t *k) {
    return Acorn128_raw::crypto_aead_decrypt(m, outputmlen, nsec, c, clen, ad, adlen, npub, k);
}

std::string Acorn128::shortDescription() const {
    return "Acorn128";
}
