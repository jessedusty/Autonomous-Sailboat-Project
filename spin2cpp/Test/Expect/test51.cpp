#include <propeller.h>
#include "test51.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

int32_t test51::Run(void)
{
  OUTA = Len((int32_t)"hello, world\r\n");
  return 0;
}

int32_t test51::Len(int32_t Stringptr)
{
  return strlen((char *) Stringptr);
}

