#include <propeller.h>
#include "test46.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

INLINE__ int32_t Between__(int32_t x, int32_t a, int32_t b){ if (a <= b) return x >= a && x <= b; return x >= b && x <= a; }

int32_t test46::Fun(int32_t X, int32_t Y)
{
  if (X == 0) {
    if (Y == 0) {
      OUTA ^= 0x1;
    } else if (Y == 1) {
      OUTA ^= 0x2;
    }
  } else if (Between__(X, 10, 12)) {
    OUTA ^= 0x4;
  } else if (1) {
    OUTA ^= 0x8;
  }
  return 0;
}

