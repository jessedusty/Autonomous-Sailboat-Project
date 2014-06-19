#include <propeller.h>
#include "test68.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

int32_t test68::Foo(int32_t N)
{
  int32_t result = 0;
  {
    int32_t _limit__0000 = N;
    int32_t _step__0001 = 1;
    result = 1;
    if (result >= _limit__0000) _step__0001 = -_step__0001;
    do {
      OUTA = result;
      result = result + _step__0001;
    } while (((_step__0001 > 0) && (result <= _limit__0000)) || ((_step__0001 < 0) && (result >= _limit__0000)));
  }
  return result;
}

