#include <propeller.h>
#include "test38.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

INLINE__ int32_t Min__(int32_t a, int32_t b) { return a < b ? a : b; }
INLINE__ int32_t Max__(int32_t a, int32_t b) { return a > b ? a : b; }
int32_t test38::Big(int32_t X, int32_t Y)
{
  int32_t result = 0;
  result = Max__(X, Y);
  return result;
}

int32_t test38::Small(int32_t X, int32_t Y)
{
  int32_t result = 0;
  result = Min__(X, Y);
  return result;
}

