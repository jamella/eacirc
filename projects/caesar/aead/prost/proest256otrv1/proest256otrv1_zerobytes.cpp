#include "proest256otrv1_zerobytes.h"

// CHANGE namespace moved due to includes
namespace Proest256otrv1_raw {

unsigned char *zerobytes(unsigned char *r,unsigned long long n)
{
  volatile unsigned char *p=r;
  while (n--)
    *(p++) = 0;
  return r;
}

} // namespace Proest256otrv1_raw
