#ifndef PAEQ128TNM_ENCRYPT_H
#define PAEQ128TNM_ENCRYPT_H

#include "paeq128tnm_api.h"

namespace Paeq128tnm_raw {
extern int numRounds;

int crypto_aead_encrypt(unsigned char *c, unsigned long long *clen,
                        const unsigned char *m, unsigned long long mlen,
                        const unsigned char *ad, unsigned long long adlen,
                        const unsigned char *nsec, const unsigned char *npub,
                        const unsigned char *k);

int crypto_aead_decrypt(unsigned char *m, unsigned long long *outputmlen,
                        unsigned char *nsec,
                        const unsigned char *c, unsigned long long clen,
                        const unsigned char *ad, unsigned long long adlen,
                        const unsigned char *npub, const unsigned char *k);
} // namespace Paeq128tnm_raw

#endif // PAEQ128TNM_ENCRYPT_H
