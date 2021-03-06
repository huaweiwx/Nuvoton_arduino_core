/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _WIRING_CONSTANTS_
#define _WIRING_CONSTANTS_

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

#ifndef    GPIO_MODE_INPUT
  #define  GPIO_MODE_INPUT         GPIO_PMD_INPUT       /* 0 */
  #define  GPIO_MODE_OUTPUT        GPIO_PMD_OUTPUT      /* 1 */
  #define  GPIO_MODE_OPEN_DRAIN    GPIO_PMD_OPEN_DRAIN  /* 2 */

  #ifdef   GPIO_PMD_QUASI
    #define  GPIO_MODE_QUASI       GPIO_PMD_QUASI       /* 3 */
  #else
    #define  GPIO_MODE_QUASI       GPIO_PMD_OPEN_DRAIN  /* NANO */
  #endif
#endif

#define INPUT         GPIO_MODE_INPUT      /* 0  */
#define OUTPUT        GPIO_MODE_OUTPUT     /* 1  */
#define OUTPUT_OD     GPIO_MODE_OPEN_DRAIN /* 2  */
#define QUASI         GPIO_MODE_QUASI      /* 3  */

#define INPUT_PULLUP                        0b0100
#define INPUT_PULLDOWN                      0b1000

#define OUTPUT_PP     OUTPUT

#define HIGH 0x1
#define LOW  0x0

#ifndef true
#  define true  0x1
#endif
#ifndef false
#  define false 0x0
#endif

#define PI			3.1415926535897932384626433832795
#define HALF_PI		1.5707963267948966192313216916398
#define TWO_PI		6.283185307179586476925286766559
#define DEG_TO_RAD	0.017453292519943295769236907684886
#define RAD_TO_DEG	57.295779513082320876798154814105
#define EULER		2.718281828459045235360287471352

#define SERIAL  0x0
#define DISPLAY 0x1

enum BitOrder {
	LSBFIRST = 0,
	MSBFIRST = 1
};

//      LOW 0
//      HIGH 1
#define CHANGE  2
#define FALLING 3
#define RISING  4

#define DEFAULT  1
#define EXTERNAL 0

// undefine stdlib's abs if encountered
#ifdef abs
#undef abs
#endif // abs

#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif // min

#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif // max

#define abs(x) ((x)>0?(x):-(x))
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#define round(x)     ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))
#define radians(deg) ((deg)*DEG_TO_RAD)
#define degrees(rad) ((rad)*RAD_TO_DEG)
#define sq(x) ((x)*(x))

#define interrupts()   __enable_irq()
#define noInterrupts() __disable_irq()

#define lowByte(w)  ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

#define bitRead(value, bit)  (((value) >> (bit)) & 0x01)
#define bitSet(value, bit)   ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))
#define bit(b) (1UL << (b))

// avr-libc defines _NOP() since 1.6.2
#ifndef _NOP
# define _NOP() do { __asm__ volatile ("nop"); } while (0)
#endif

typedef unsigned int word;


// TODO: to be checked
typedef uint8_t boolean ;
typedef uint8_t byte ;


#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif /* _WIRING_CONSTANTS_ */
