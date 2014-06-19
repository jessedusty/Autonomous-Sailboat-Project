#include <propeller.h>
#include "test77.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

static uint32_t Sqrt__(uint32_t a) {
    uint32_t res = 0;
    uint32_t bit = 1<<30;
    while (bit > a) bit = bit>>2;
    while (bit != 0) {
        if (a >= res+bit) {
            a = a - (res+bit);
            res = (res>>1) + bit;
        } else res = res >> 1;
        bit = bit >> 2;
    }
    return res;
}
uint8_t test77::dat[] = {
  0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 0x40, 0xf3, 0x04, 0xb5, 0x3f, 
};
int32_t test77::Dummy(void)
{
  return (int32_t)(&(*(int32_t *)&dat[0]));
}

