#include "Ifeedaes128n104v1.h"
#include "ifeedaes128n104v1_encrypt.h"
#include "../../common/api.h"
#include "EACglobals.h"

Ifeedaes128n104v1::Ifeedaes128n104v1(int numRounds)
    : CaesarInterface(CAESAR_IFEEDAES128N104V1, numRounds, CRYPTO_KEYBYTES, CRYPTO_NSECBYTES, CRYPTO_NPUBBYTES, CRYPTO_ABYTES) {
    if (numRounds < -1 || numRounds > maxNumRounds) {
        mainLogger.out(LOGGER_WARNING) << "Weird number of rouds (" << numRounds << ") for " << shortDescription() << endl;
    }
    if (numRounds == -1) {
        Ifeedaes128n104v1_raw::numRounds = maxNumRounds;
        CaesarCommon::numRounds = maxNumRounds;
    } else {
        Ifeedaes128n104v1_raw::numRounds = m_numRounds;
        CaesarCommon::numRounds = m_numRounds;
    }
}

Ifeedaes128n104v1::~Ifeedaes128n104v1() { }

int Ifeedaes128n104v1::encrypt(bits_t *c, length_t *clen, const bits_t *m, length_t mlen,
                       const bits_t *ad, length_t adlen, const bits_t *nsec, const bits_t *npub,
                       const bits_t *k) {
    return Ifeedaes128n104v1_raw::crypto_aead_encrypt(c, clen, m, mlen, ad, adlen, nsec, npub, k);
}

int Ifeedaes128n104v1::decrypt(bits_t *m, length_t *outputmlen, bits_t *nsec,
                       const bits_t *c, length_t clen, const bits_t *ad, length_t adlen,
                       const bits_t *npub, const bits_t *k) {
    return Ifeedaes128n104v1_raw::crypto_aead_decrypt(m, outputmlen, nsec, c, clen, ad, adlen, npub, k);
}

std::string Ifeedaes128n104v1::shortDescription() const {
    return "Ifeedaes128n104v1";
}
