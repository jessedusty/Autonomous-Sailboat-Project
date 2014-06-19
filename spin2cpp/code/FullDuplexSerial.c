//
// automatically generated by spin2cpp v1.91 on Thu Jun 19 14:20:30 2014
// ../spin2cpp --ccode HMC5883L_demo.spin 
//

// ********************************************
// *  Full-Duplex Serial Driver v1.2          *
// *  Author: Chip Gracey, Jeff Martin        *
// *  Copyright (c) 2006-2009 Parallax, Inc.  *
// *  See end of file for terms of use.       *
// ********************************************
/* -----------------REVISION HISTORY-----------------
 v1.2 - 5/7/2009 fixed bug in dec method causing largest negative value (-2,147,483,648) to be output as -0.
 v1.1 - 3/1/2006 first official release.
 */
#include <stdlib.h>
#include <propeller.h>
#include "FullDuplexSerial.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define Yield__() __asm__ volatile( "" ::: "memory" )
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#define Yield__()
#define waitcnt(n) _waitcnt(n)
#define coginit(id, code, par) _coginit((unsigned)(par)>>2, (unsigned)(code)>>2, id)
#define cognew(code, par) coginit(0x8, (code), (par))
#define cogstop(i) _cogstop(i)
#endif

INLINE__ int32_t Rotl__(uint32_t a, uint32_t b) { return (a<<b) | (a>>(32-b)); }
INLINE__ int32_t Rotr__(uint32_t a, uint32_t b) { return (a>>b) | (a<<(32-b)); }
INLINE__ int32_t Lookup__(int32_t x, int32_t b, int32_t a[], int32_t n) { int32_t i = (x)-(b); return ((unsigned)i >= n) ? 0 : (a)[i]; }

static uint8_t dat[] = {
  0xf0, 0xa9, 0xbc, 0xa0, 0x10, 0xa8, 0xfc, 0x80, 0x54, 0xaa, 0xbc, 0x08, 0x01, 0xb2, 0xfc, 0xa0, 
  0x55, 0xb2, 0xbc, 0x2c, 0x04, 0xa8, 0xfc, 0x80, 0x54, 0xaa, 0xbc, 0x08, 0x01, 0xbe, 0xfc, 0xa0, 
  0x55, 0xbe, 0xbc, 0x2c, 0x04, 0xa8, 0xfc, 0x80, 0x54, 0xae, 0xbc, 0x08, 0x04, 0xa8, 0xfc, 0x80, 
  0x54, 0xb0, 0xbc, 0x08, 0x04, 0xa8, 0xfc, 0x80, 0x54, 0xb4, 0xbc, 0x08, 0x5a, 0xc0, 0xbc, 0xa0, 
  0x10, 0xc0, 0xfc, 0x80, 0x04, 0xae, 0x7c, 0x62, 0x02, 0xae, 0x7c, 0x61, 0x5f, 0xe8, 0x9b, 0x68, 
  0x5f, 0xec, 0xab, 0x68, 0x33, 0xc8, 0xfc, 0xa0, 0x64, 0xbc, 0xbc, 0x5c, 0x01, 0xae, 0x7c, 0x62, 
  0xf2, 0xb3, 0x3c, 0x61, 0x16, 0x00, 0x64, 0x5c, 0x09, 0xb8, 0xfc, 0xa0, 0x58, 0xba, 0xbc, 0xa0, 
  0x01, 0xba, 0xfc, 0x28, 0xf1, 0xbb, 0xbc, 0x80, 0x58, 0xba, 0xbc, 0x80, 0x64, 0xbc, 0xbc, 0x5c, 
  0x5d, 0xa8, 0xbc, 0xa0, 0xf1, 0xa9, 0xbc, 0x84, 0x00, 0xa8, 0x7c, 0xc1, 0x1f, 0x00, 0x4c, 0x5c, 
  0xf2, 0xb3, 0x3c, 0x61, 0x01, 0xb6, 0xfc, 0x30, 0x1e, 0xb8, 0xfc, 0xe4, 0x17, 0xb6, 0xfc, 0x28, 
  0xff, 0xb6, 0xfc, 0x60, 0x01, 0xae, 0x7c, 0x62, 0xff, 0xb6, 0xd4, 0x6c, 0xf0, 0xab, 0xbc, 0x08, 
  0x5a, 0xaa, 0xbc, 0x80, 0x55, 0xb6, 0x3c, 0x00, 0x5a, 0xaa, 0xbc, 0x84, 0x01, 0xaa, 0xfc, 0x80, 
  0x0f, 0xaa, 0xfc, 0x60, 0xf0, 0xab, 0x3c, 0x08, 0x16, 0x00, 0x7c, 0x5c, 0x5e, 0xc8, 0xbc, 0x5c, 
  0xf0, 0xa9, 0xbc, 0xa0, 0x08, 0xa8, 0xfc, 0x80, 0x54, 0xaa, 0xbc, 0x08, 0x04, 0xa8, 0xfc, 0x80, 
  0x54, 0xac, 0xbc, 0x08, 0x56, 0xaa, 0x3c, 0x86, 0x33, 0x00, 0x68, 0x5c, 0x60, 0xac, 0xbc, 0x80, 
  0x56, 0xc2, 0xbc, 0x00, 0x60, 0xac, 0xbc, 0x84, 0x01, 0xac, 0xfc, 0x80, 0x0f, 0xac, 0xfc, 0x60, 
  0x54, 0xac, 0x3c, 0x08, 0x00, 0xc3, 0xfc, 0x68, 0x02, 0xc2, 0xfc, 0x2c, 0x01, 0xc2, 0xfc, 0x68, 
  0x0b, 0xc4, 0xfc, 0xa0, 0xf1, 0xc7, 0xbc, 0xa0, 0x04, 0xae, 0x7c, 0x62, 0x02, 0xae, 0x7c, 0x61, 
  0x01, 0xc2, 0xe0, 0x6c, 0x01, 0xc2, 0xfc, 0x29, 0x5f, 0xe8, 0xab, 0x70, 0x5f, 0xec, 0x97, 0x74, 
  0x58, 0xc6, 0xbc, 0x80, 0x5e, 0xc8, 0xbc, 0x5c, 0x63, 0xa8, 0xbc, 0xa0, 0xf1, 0xa9, 0xbc, 0x84, 
  0x00, 0xa8, 0x7c, 0xc1, 0x4d, 0x00, 0x4c, 0x5c, 0x46, 0xc4, 0xfc, 0xe4, 0x33, 0x00, 0x7c, 0x5c, 
};
int32_t FullDuplexSerial_start(FullDuplexSerial *self, int32_t rxpin, int32_t txpin, int32_t mode, int32_t baudrate)
{
  int32_t _parm__0000[4];
  int32_t okay = 0;
  _parm__0000[0] = rxpin;
  _parm__0000[1] = txpin;
  _parm__0000[2] = mode;
  _parm__0000[3] = baudrate;
  // Start serial driver - starts a cog
  // returns false if no cog available
  //
  // mode bit 0 = invert rx
  // mode bit 1 = invert tx
  // mode bit 2 = open-drain/source tx
  // mode bit 3 = ignore tx echo on rx
  FullDuplexSerial_stop(self);
  memset( (void *)&self->rx_head, 0, sizeof(int32_t)*4);
  memmove( (void *)&self->rx_pin, (void *)&_parm__0000[0], 4*(3));
  self->bit_ticks = CLKFREQ / _parm__0000[3];
  self->buffer_ptr = (int32_t)(&self->rx_buffer[0]);
  okay = (self->cog = cognew((int32_t)(&(*(int32_t *)&dat[0])), (int32_t)(&self->rx_head)) + 1);
  return okay;
}

int32_t FullDuplexSerial_stop(FullDuplexSerial *self)
{
  // Stop serial driver - frees a cog
  if (self->cog) {
    cogstop((PostEffect__(self->cog, 0) - 1));
  }
  memset( (void *)&self->rx_head, 0, sizeof(int32_t)*9);
  return 0;
}

int32_t FullDuplexSerial_rxflush(FullDuplexSerial *self)
{
  // Flush receive buffer
  while (FullDuplexSerial_rxcheck(self) >= 0) {
    Yield__();
  }
  return 0;
}

int32_t FullDuplexSerial_rxcheck(FullDuplexSerial *self)
{
  int32_t rxbyte = 0;
  // Check if byte received (never waits)
  // returns -1 if no byte received, $00..$FF if byte
  (rxbyte--);
  if (self->rx_tail != self->rx_head) {
    rxbyte = self->rx_buffer[self->rx_tail];
    self->rx_tail = (self->rx_tail + 1) & 0xf;
  }
  return rxbyte;
}

int32_t FullDuplexSerial_rxtime(FullDuplexSerial *self, int32_t ms)
{
  int32_t	t;
  int32_t rxbyte = 0;
  // Wait ms milliseconds for a byte to be received
  // returns -1 if no byte received, $00..$FF if byte
  t = CNT;
  while (!(((rxbyte = FullDuplexSerial_rxcheck(self)) >= 0) || (((CNT - t) / (CLKFREQ / 1000)) > ms))) {
    Yield__();
  }
  return rxbyte;
}

int32_t FullDuplexSerial_rx(FullDuplexSerial *self)
{
  int32_t rxbyte = 0;
  // Receive byte (may wait for byte)
  // returns $00..$FF
  while ((rxbyte = FullDuplexSerial_rxcheck(self)) < 0) {
    Yield__();
  }
  return rxbyte;
}

int32_t FullDuplexSerial_tx(FullDuplexSerial *self, int32_t txbyte)
{
  // Send byte (may wait for room in buffer)
  while (!(self->tx_tail != ((self->tx_head + 1) & 0xf))) {
    Yield__();
  }
  self->tx_buffer[self->tx_head] = txbyte;
  self->tx_head = (self->tx_head + 1) & 0xf;
  if (self->rxtx_mode & 0x8) {
    FullDuplexSerial_rx(self);
  }
  return 0;
}

int32_t FullDuplexSerial_str(FullDuplexSerial *self, int32_t stringptr)
{
  // Send string                    
  {
    int32_t _idx__0003;
    int32_t _limit__0004 = strlen((char *) stringptr);
    for(_idx__0003 = 1; _idx__0003 <= _limit__0004; _idx__0003 = _idx__0003 + 1) {
      FullDuplexSerial_tx(self, ((uint8_t *)(stringptr++))[0]);
    }
  }
  return 0;
}

int32_t FullDuplexSerial_dec(FullDuplexSerial *self, int32_t value)
{
  int32_t	i, x;
  int32_t result = 0;
  // Print a decimal number
  // Check for max negative
  x = -(value == (int32_t)0x80000000U);
  if (value < 0) {
    // If negative, make positive; adjust for max negative
    value = abs((value + x));
    // and output sign
    FullDuplexSerial_tx(self, '-');
  }
  // Initialize divisor
  i = 1000000000;
  {
    int32_t _idx__0005;
    for(_idx__0005 = 1; _idx__0005 <= 10; _idx__0005 = _idx__0005 + 1) {
      // Loop for 10 digits
      if (value >= i) {
        // If non-zero digit, output digit; adjust for max negative
        FullDuplexSerial_tx(self, (((value / i) + '0') + (x * -(i == 1))));
        // and digit from value
        value = value % i;
        // flag non-zero found
        result = -1;
      } else {
        if ((result) || (i == 1)) {
          // If zero digit (or only digit) output it
          FullDuplexSerial_tx(self, '0');
        }
      }
      // Update divisor
      i = i / 10;
    }
  }
  return result;
}

int32_t FullDuplexSerial_hex(FullDuplexSerial *self, int32_t value, int32_t digits)
{
  static int32_t look__0006[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, };

  // Print a hexadecimal number
  value = value << ((8 - digits) << 2);
  {
    int32_t _idx__0007;
    int32_t _limit__0008 = digits;
    for(_idx__0007 = 1; _idx__0007 <= _limit__0008; _idx__0007 = _idx__0007 + 1) {
      FullDuplexSerial_tx(self, Lookup__(((value = Rotl__(value, 4)) & 0xf), 0, look__0006, 16));
    }
  }
  return 0;
}

int32_t FullDuplexSerial_bin(FullDuplexSerial *self, int32_t value, int32_t digits)
{
  // Print a binary number
  value = value << (32 - digits);
  {
    int32_t _idx__0009;
    int32_t _limit__0010 = digits;
    for(_idx__0009 = 1; _idx__0009 <= _limit__0010; _idx__0009 = _idx__0009 + 1) {
      FullDuplexSerial_tx(self, (((value = Rotl__(value, 1)) & 0x1) + '0'));
    }
  }
  return 0;
}

/* 

┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
│                                                   TERMS OF USE: MIT License                                                  │                                                            
├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
│Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation    │ 
│files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy,    │
│modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software│
│is furnished to do so, subject to the following conditions:                                                                   │
│                                                                                                                              │
│The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.│
│                                                                                                                              │
│THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE          │
│WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR         │
│COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,   │
│ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                         │
└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
