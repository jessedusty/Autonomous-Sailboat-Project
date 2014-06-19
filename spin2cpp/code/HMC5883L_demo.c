//
// automatically generated by spin2cpp v1.91 on Thu Jun 19 14:20:30 2014
// ../spin2cpp --ccode HMC5883L_demo.spin 
//

/* 
┌─────────────────────────────────────┬────────────────────────┬──────┬────────┐
│ HMC5883.spin                        │ (C)2011 Parallax, Inc. │ V1.0 │ Sept 1 │
├─────────────────────────────────────┴────────────────────────┴──────┴────────┤
│ Controls a Honeywell HMC5883 3-Axis compass over an I2C bus.                 │
│ Demo shows RAW X,Y,Z, and calulated Aziumth plus a heading in Degrees.       │                                          
└──────────────────────────────────────────────────────────────────────────────┘


 
  ┌────────────┐
  │ H      SDA ┣───  I²C Data pin, I²C Master/Slave Data (Data I/O)     
  │ M      SCL ┣───  Serial Clock - I²C Master/Slave Clock (Clock 160Hz Default)
  │ C     DRDY ┣───  Data Ready, interrupt pin. Internaly pulled high. (optional, see datasheet for details)
  │ 5      VIN ┣───  2.7 - 6.5VDC (module is regulated to 2.5VDC)    
  │ 8      GND ┣──┐
  │ 8          │  
  │ 3  -Module │
  └────────────┘ 
 */
#include <stdlib.h>
#include <propeller.h>
#include "HMC5883L_demo.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#define waitcnt(n) _waitcnt(n)
#define coginit(id, code, par) _coginit((unsigned)(par)>>2, (unsigned)(code)>>2, id)
#define cognew(code, par) coginit(0x8, (code), (par))
#define cogstop(i) _cogstop(i)
#endif

INLINE__ int32_t Min__(int32_t a, int32_t b) { return a < b ? a : b; }
INLINE__ int32_t Max__(int32_t a, int32_t b) { return a > b ? a : b; }
INLINE__ int32_t Shr__(uint32_t a, uint32_t b) { return (a>>b); }
static  int32_t HMC5883L_demo_Azimuth( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_AZ_A( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_AZ_B( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_AZ_C( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_AZ_D( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_send( HMC5883L_demo *self, int32_t value);
static  int32_t HMC5883L_demo_receive( HMC5883L_demo *self, int32_t aknowledge);
static  int32_t HMC5883L_demo_start( HMC5883L_demo *self );
static  int32_t HMC5883L_demo_stop( HMC5883L_demo *self );

static uint8_t dat[] = {
  0x45, 0x00, 0x4e, 0x00, 0x53, 0x00, 0x57, 0x00, 0x41, 0x7a, 0x69, 0x6d, 0x75, 0x74, 0x68, 0x20, 
  0x3d, 0x20, 0x00, 0x58, 0x20, 0x3d, 0x20, 0x00, 0x59, 0x20, 0x3d, 0x20, 0x00, 0x5a, 0x20, 0x3d, 
  0x20, 0x00, 0x4e, 0x4f, 0x52, 0x54, 0x48, 0x00, 0x53, 0x4f, 0x55, 0x54, 0x48, 0x00, 0x45, 0x41, 
  0x53, 0x54, 0x00, 0x57, 0x45, 0x53, 0x54, 0x00, 
};
int32_t HMC5883L_demo_Main(HMC5883L_demo *self)
{
  // Wait while compass has time to startup.
  waitcnt(((CLKFREQ / 100000) + CNT));
  // start a terminal Object (rxpin, txpin, mode, baud rate)
  FullDuplexSerial_start(&self->Term, 31, 30, 0, 9600);
  // sets 
  HMC5883L_demo_SetCont(self);
  while (1) {
    // Repeat indefinitely
    // Start with Register OUT_X_MSB
    HMC5883L_demo_SetPointer(self, OUTPUT_X_MSB);
    // Gather raw data from compass       
    HMC5883L_demo_GetRaw(self);
    // Set Terminal data at top of screen
    FullDuplexSerial_tx(&self->Term, 1);
    // Terminal window display X,Y,Z Raw Data
    HMC5883L_demo_RawTerm(self);
    // Terminal window display of heading in degrees.
    HMC5883L_demo_HeadingTerm(self);
  }
  return 0;
}

int32_t HMC5883L_demo_HeadingTerm(HMC5883L_demo *self)
{
  FullDuplexSerial_str(&self->Term, (int32_t)"Heading in Degrees:\013");
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 13);
  HMC5883L_demo_Heading(self);
  return 0;
}

int32_t HMC5883L_demo_AzimuthTerm(HMC5883L_demo *self)
{
  FullDuplexSerial_str(&self->Term, (int32_t)"This is the calculated azimuth:\013");
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[8])));
  FullDuplexSerial_dec(&self->Term, HMC5883L_demo_Azimuth(self));
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 13);
  return 0;
}

int32_t HMC5883L_demo_RawTerm(HMC5883L_demo *self)
{
  FullDuplexSerial_str(&self->Term, (int32_t)"       Raw X,Y,Z:\013");
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 32);
  FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[19])));
  FullDuplexSerial_dec(&self->Term, self->x);
  FullDuplexSerial_tx(&self->Term, 29);
  FullDuplexSerial_tx(&self->Term, 32);
  FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[24])));
  FullDuplexSerial_dec(&self->Term, self->y);
  FullDuplexSerial_tx(&self->Term, 29);
  FullDuplexSerial_tx(&self->Term, 32);
  FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[29])));
  FullDuplexSerial_dec(&self->Term, self->z);
  FullDuplexSerial_tx(&self->Term, 13);
  FullDuplexSerial_tx(&self->Term, 13);
  return 0;
}

int32_t HMC5883L_demo_aziadjust(HMC5883L_demo *self)
{
  int32_t value = 0;
  /*  Converts the Azimuth to Degrees from 0 - 360.  */
  self->NW = 0;
  self->NE = 0;
  self->SE = 0;
  self->SW = 0;
  if (self->x <= 0) {
    if (HMC5883L_demo_Azimuth(self) <= 0) {
      value = HMC5883L_demo_AZ_A(self);
      self->NW = 1;
    } else {
      self->NW = 0;
    }
    if (HMC5883L_demo_Azimuth(self) > 0) {
      value = HMC5883L_demo_AZ_D(self);
      self->SW = 1;
    } else {
      self->SW = 0;
    }
  }
  if (self->x > 0) {
    if (HMC5883L_demo_Azimuth(self) <= 0) {
      value = HMC5883L_demo_AZ_B(self);
      self->NE = 1;
    } else {
      self->NE = 0;
    }
    if (HMC5883L_demo_Azimuth(self) > 0) {
      value = HMC5883L_demo_AZ_C(self);
      self->SE = 1;
    } else {
      self->SE = 0;
    }
  }
  value = Min__((Max__(1, value)), 360);
  value = (value + 270) % 360;
  return value;
}

int32_t HMC5883L_demo_Heading(HMC5883L_demo *self)
{
  int32_t	t1, t2;
  // Gives a heading in alpha numeric format. From 0 - 90 degrees for NE,NW,SE,SW directions.
  t1 = 0;
  t2 = 0;
  t1 = HMC5883L_demo_aziadjust(self);
  if (self->NE == 1) {
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[2])));
    t2 = HMC5883L_demo_aziadjust(self);
    FullDuplexSerial_dec(&self->Term, t2);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[0])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (self->SE == 1) {
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[4])));
    t2 = HMC5883L_demo_aziadjust(self) - 180;
    FullDuplexSerial_dec(&self->Term, (abs(t2)));
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[0])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (self->SW == 1) {
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[4])));
    t2 = HMC5883L_demo_aziadjust(self) - 180;
    FullDuplexSerial_dec(&self->Term, t2);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[6])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (self->NW == 1) {
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[2])));
    t2 = Min__((360 - HMC5883L_demo_aziadjust(self)), 90);
    if (t2 == 90) {
      t2 = 0;
    }
    FullDuplexSerial_dec(&self->Term, t2);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[6])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (t1 == 0) {
    FullDuplexSerial_tx(&self->Term, 11);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[34])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (t1 == 90) {
    FullDuplexSerial_tx(&self->Term, 12);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[46])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (t1 == 180) {
    FullDuplexSerial_tx(&self->Term, 12);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[40])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  if (t1 == 271) {
    FullDuplexSerial_tx(&self->Term, 12);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_tx(&self->Term, 8);
    FullDuplexSerial_str(&self->Term, (int32_t)(&(*(uint8_t *)&dat[51])));
    FullDuplexSerial_tx(&self->Term, 11);
  }
  return 0;
}

int32_t HMC5883L_demo_SetCont(HMC5883L_demo *self)
{
  /*  Sets the Compass to Continuous output mode. */
  HMC5883L_demo_start(self);
  HMC5883L_demo_send(self, WRITE_DATA);
  HMC5883L_demo_send(self, MODE);
  HMC5883L_demo_send(self, 0);
  HMC5883L_demo_stop(self);
  return 0;
}

int32_t HMC5883L_demo_SetPointer(HMC5883L_demo *self, int32_t Register)
{
  /*  Start pointer at user specified Register.  */
  HMC5883L_demo_start(self);
  HMC5883L_demo_send(self, WRITE_DATA);
  HMC5883L_demo_send(self, Register);
  HMC5883L_demo_stop(self);
  return 0;
}

int32_t HMC5883L_demo_GetRaw(HMC5883L_demo *self)
{
  /*  Get raw data from continous output. */
  HMC5883L_demo_start(self);
  HMC5883L_demo_send(self, READ_DATA);
  // RegisterA and RegisterB
  self->x = (HMC5883L_demo_receive(self, -1) << 8) | HMC5883L_demo_receive(self, -1);
  self->z = (HMC5883L_demo_receive(self, -1) << 8) | HMC5883L_demo_receive(self, -1);
  self->y = (HMC5883L_demo_receive(self, -1) << 8) | HMC5883L_demo_receive(self, 0);
  HMC5883L_demo_stop(self);
  ((self->x << 16) >> 16);
  ((self->z << 16) >> 16);
  ((self->y << 16) >> 16);
  self->x = self->x;
  self->z = self->z;
  self->y = self->y;
  return 0;
}

static int32_t HMC5883L_demo_Azimuth(HMC5883L_demo *self)
{
  int32_t result = 0;
  result = SL32_INTEngine_2_arcTan(&self->math, self->y, self->x);
  return result;
}

static int32_t HMC5883L_demo_AZ_A(HMC5883L_demo *self)
{
  int32_t result = 0;
  result = abs(HMC5883L_demo_Azimuth(self));
  return result;
}

static int32_t HMC5883L_demo_AZ_B(HMC5883L_demo *self)
{
  int32_t result = 0;
  result = HMC5883L_demo_Azimuth(self) + 180;
  return result;
}

static int32_t HMC5883L_demo_AZ_C(HMC5883L_demo *self)
{
  int32_t result = 0;
  result = HMC5883L_demo_Azimuth(self) + 180;
  return result;
}

static int32_t HMC5883L_demo_AZ_D(HMC5883L_demo *self)
{
  int32_t result = 0;
  result = (-HMC5883L_demo_Azimuth(self)) + 360;
  return result;
}

static int32_t HMC5883L_demo_send(HMC5883L_demo *self, int32_t value)
{
  int32_t result = 0;
  // I²C Send data - 4 Stack Longs
  value = __builtin_propeller_rev((~value), 32 - 8);
  {
    int32_t _idx__0001;
    for(_idx__0001 = 1; _idx__0001 <= 8; _idx__0001 = _idx__0001 + 1) {
      DIRA = ((DIRA & 0xfffffffd) | ((value & 0x1) << datapin));
      DIRA &= ~(1<<clockPin);
      DIRA = ((DIRA & 0xfffffffe) | 0x1);
      value = Shr__(value, 1);
    }
  }
  DIRA &= ~(1<<datapin);
  DIRA &= ~(1<<clockPin);
  result = ~((INA >> datapin) & 0x1);
  DIRA = ((DIRA & 0xfffffffe) | 0x1);
  DIRA = ((DIRA & 0xfffffffd) | 0x2);
  return result;
}

static int32_t HMC5883L_demo_receive(HMC5883L_demo *self, int32_t aknowledge)
{
  int32_t result = 0;
  // I²C receive data - 4 Stack Longs
  DIRA &= ~(1<<datapin);
  {
    int32_t _idx__0002;
    for(_idx__0002 = 1; _idx__0002 <= 8; _idx__0002 = _idx__0002 + 1) {
      result = result << 1;
      DIRA &= ~(1<<clockPin);
      result = result | ((INA >> datapin) & 0x1);
      DIRA = ((DIRA & 0xfffffffe) | 0x1);
    }
  }
  DIRA = ((DIRA & 0xfffffffd) | ((aknowledge & 0x1) << datapin));
  DIRA &= ~(1<<clockPin);
  DIRA = ((DIRA & 0xfffffffe) | 0x1);
  DIRA = ((DIRA & 0xfffffffd) | 0x2);
  return result;
}

static int32_t HMC5883L_demo_start(HMC5883L_demo *self)
{
  // 3 Stack Longs
  OUTA &= ~(1<<datapin);
  OUTA &= ~(1<<clockPin);
  DIRA = ((DIRA & 0xfffffffd) | 0x2);
  DIRA = ((DIRA & 0xfffffffe) | 0x1);
  return 0;
}

static int32_t HMC5883L_demo_stop(HMC5883L_demo *self)
{
  // 3 Stack Longs
  DIRA &= ~(1<<clockPin);
  DIRA &= ~(1<<datapin);
  return 0;
}

