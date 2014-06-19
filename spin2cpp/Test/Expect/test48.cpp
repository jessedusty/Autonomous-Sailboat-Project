#include <propeller.h>
#include "test48.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

int32_t test48::Setcolors(int32_t Colorptr)
{
  int32_t	I, Fore, Back;
  for(I = 0; I <= 7; I = I + 1) {
    Fore = ((uint8_t *)Colorptr)[(I << 1)] << 2;
    OUTA = ((OUTA & 0xffffff00) | ((Fore & 0xff) << 0));
  }
  return 0;
}

int32_t test48::Stop(void)
{
  OUTA &= ~(255<<0);
  return 0;
}

