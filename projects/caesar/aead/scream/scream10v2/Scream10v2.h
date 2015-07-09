#ifndef SCREAM10V2_H
#define SCREAM10V2_H

#include "../../../CaesarInterface.h"

class Scream10v2 : public CaesarInterface {
    const int maxNumRounds = -1;
public:
    Scream10v2(int numRounds);
    ~Scream10v2();
    int encrypt(bits_t *c, length_t *clen, const bits_t *m, length_t mlen,
                        const bits_t *ad, length_t adlen, const bits_t *nsec, const bits_t *npub,
                        const bits_t *k);
    int decrypt(bits_t *m, length_t *outputmlen, bits_t *nsec,
                        const bits_t *c, length_t clen, const bits_t *ad, length_t adlen,
                        const bits_t *npub, const bits_t *k);
    std::string shortDescription() const;
};

#endif // SCREAM10V2_H
