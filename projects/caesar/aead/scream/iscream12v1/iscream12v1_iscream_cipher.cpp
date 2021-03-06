/* LS-cipher implementation */

// CHANGE crypto_uintXX typedefs
// #include "crypto_uint16.h"
// #include "crypto_uint8.h"
#include <cstdint>
typedef uint8_t crypto_uint8;
typedef uint16_t crypto_uint16;

#include "iscream12v1_sbox.h"
#include "iscream12v1_lbox.h"
#include "iscream12v1_params.h"

// CHANGE namespace moved due to includes
namespace Iscream12v1_raw {
int numRounds = -1;

#define ROTL(x) ((((crypto_uint16) (x))<<1) | (((crypto_uint16) (x))>>15))

void LS_encrypt(const crypto_uint8 input[16], const crypto_uint8 key[16], const crypto_uint8 tweak[16],
        crypto_uint8 output[16]) {
  crypto_uint16 data[8];
  crypto_uint16 k[8];
  crypto_uint16 t[8];
  int i,j;

  for (i=0; i<8; i++) {
    data[i] = ((crypto_uint16)input[2*i+1]<<8) + input[2*i];
    k[i] = ((crypto_uint16)  key[2*i+1]<<8) +   key[2*i];
    t[i] = ((crypto_uint16)tweak[2*i+1]<<8) + tweak[2*i];
  }

  /* Initial key + tweak addition */
  for (j=0; j<8; j++) data[j] ^= k[j] ^ t[j];

  /* ---------------- Step Function ---------------- */
  for (i=0; i<nSteps; i++) {

    /* ---------------- First Round ---------------- */
    /* SBox layer (bitsliced) */
    SBOX(data);
    /* First round constant */
    data[0] ^= ((27*(2*i)) % 256);
    /* LBox layer (tables) */
    for (j=0; j<8; j++)
      data[j] = LBox2[data[j]>>8] ^ LBox1[data[j]&0xff];

    /* ---------------- Second Round -------------- */
    /* SBox layer (bitsliced) */
    SBOX(data);
    /* Round constant */
    data[0] ^= ((27*(2*i+1)) % 256);
    /* LBox layer (tables) */
    for (j=0; j<8; j++)
      data[j] = LBox2[data[j]>>8] ^ LBox1[data[j]&0xff];

    /* ----------- Key + Tweak Addition ---------- */
    switch(i%2) {
    case     0:
      for (j=0; j<8; j++) data[j] ^= ROTL(t[j]);
      break;
    case     1:
      for (j=0; j<8; j++) data[j] ^= k[j] ^ t[j];
      break;
    }
  }

  for (i=0; i<8; i++) {
    output[2*i]   = data[i];
    output[2*i+1] = data[i]>>8;
  }
}


void LS_decrypt(const crypto_uint8 input[16], const crypto_uint8 key[16], const crypto_uint8 tweak[16],
        crypto_uint8 output[16]) {
  crypto_uint16 data[8];
  crypto_uint16 k[8];
  crypto_uint16 t[8];
  int i,j;

  for (i=0; i<8; i++) {
    data[i] = ((crypto_uint16)input[2*i+1]<<8) + input[2*i];
    k[i] = ((crypto_uint16)  key[2*i+1]<<8) +   key[2*i];
    t[i] = ((crypto_uint16)tweak[2*i+1]<<8) + tweak[2*i];
  }

  /* ---------------- Step Function ---------------- */
  for (i=nSteps-1; i>=0; i--) {
    /* ----------- Key + Tweak Addition ---------- */
        switch(i%2) {
            case     0:
                for (j=0; j<8; j++) data[j] ^= ROTL(t[j]);
                break;
            case     1:
                for (j=0; j<8; j++) data[j] ^= k[j] ^ t[j];
                break;
        }

    /* ---------------- Second Round -------------- */
    /* LBox layer (tables) */
    for (j=0; j<8; j++)
      data[j] = LBox2[data[j]>>8] ^ LBox1[data[j]&0xff];
    /* Round constant */
    data[0] ^= ((27*(2*i+1)) % 256);
    /* SBox layer (bitsliced) */
    SBOX(data);

    /* ---------------- First Round ---------------- */
    /* LBox layer (tables) */
    for (j=0; j<8; j++)
      data[j] = LBox2[data[j]>>8] ^ LBox1[data[j]&0xff];
    /* First round constant */
    data[0] ^= ((27*(2*i)) % 256);
    /* SBox layer (bitsliced) */
    SBOX(data);
  }

  /* Final key + tweak addition */
  for (j=0; j<8; j++) data[j] ^= k[j] ^ t[j];

  for (i=0; i<8; i++) {
    output[2*i]   = data[i];
    output[2*i+1] = data[i]>>8;
  }
}


} // namespace Iscream12v1_raw
