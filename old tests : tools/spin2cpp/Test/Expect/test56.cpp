#include <propeller.h>
#include "test56.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

uint8_t test56::dat[] = {
  0x00, 0x00, 0x80, 0x3f, 
};
int32_t test56::Getval(void)
{
  return (*(int32_t *)&dat[0]);
}

