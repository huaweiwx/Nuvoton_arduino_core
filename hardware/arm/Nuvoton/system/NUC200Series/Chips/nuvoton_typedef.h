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
#ifndef _NUVOTON_TYPEDEF_H_
#define _NUVOTON_TYPEDEF_H_

//#define USE_BoardToPin

/* Types used for the tables below */
typedef struct _PinType
{
  uint32_t num;
  uint32_t type;
  uint32_t AMsk;
  uint32_t AMsk1;
  uint32_t AMsk2;
} PinType;

typedef struct _PinDescription
{
  uint32_t MFP;
  uint32_t Mask;
  uint32_t ALTMsk;
  uint32_t ALT1Msk;
  uint32_t ALT2Msk;
  uint32_t Type;
} PinDescription;

typedef struct _GPIOPinDescription
{
  GPIO_T *P;
  uint32_t bit;
  PinDescription Pin;
} GPIOPinDescription;

typedef struct _ADCPinDescription
{
#if defined(EADC /*__M451__*/)
  EADC_T *A;
#else // defined (__NUC131__) | defined(__NUC240__) | defined(__NANO100__) | defined(__NANO1X2__)
  ADC_T *A;
#endif
  uint32_t module;
  uint32_t ch;
  PinType pintype;
} ADCPinDescription;

typedef struct _PWMPinDescription
{
#if defined(EPWM0)  /*M480*/
  EPWM_T *P;
#else  
  PWM_T *P;
#endif
  uint32_t module;
  IRQn_Type irq;
  uint32_t ch;
  uint32_t freq;
  PinType pintype;
} PWMPinDescription;

typedef struct _SPIPinAlt
{
  PinType clk;
  PinType mosi;
  PinType miso;
  PinType ss;
} SPIPinAlt_TypeDef;
typedef struct _SPIPinDescription
{
  SPI_T *S;
  uint32_t module;
  IRQn_Type irq;
  uint32_t clksel;
  const SPIPinAlt_TypeDef* pinAlt;
} SPIPinDescription;

typedef struct _UARTPinAlt
{
  PinType rxd;
  PinType txd;
} UARTPinAlt_TypeDef;
typedef struct _UARTPinDescription
{
  UART_T *U;
  uint32_t module;
  IRQn_Type irq;
  const UARTPinAlt_TypeDef* pinAlt;
} UARTPinDescription;

#if defined(CAN0) /* M451/NUC240*/
typedef struct _CANPinDescription
{
  CAN_T *C;
  uint32_t module;
  IRQn_Type irq;
  PinType pintype[2];
} CANPinDescription;
#endif

typedef struct _I2CPinAlt
{
  PinType scl;
  PinType sda;
} I2CPinAlt_TypeDef;
typedef struct _I2CPinDescription
{
  I2C_T *I;
  uint32_t module;
  IRQn_Type irq;
  const I2CPinAlt_TypeDef* pinAlt;
} I2CPinDescription;


#ifdef USE_BoardToPin
typedef struct _BoardToPin
{
  int32_t pin;
  uint8_t type;
  uint8_t num;
} BoardToPin;

#define GPIO_TYPE   0
#define UART_TYPE   1
#define I2C_TYPE    2
#define SPI_TYPE    3
#define ADC_TYPE    4
#define PWM_TYPE    5
#define CAN_TYPE    6
#define BoardToPin_MAX_COUNT 81
extern const BoardToPin BoardToPinInfo[];
#endif


extern const GPIOPinDescription GPIO_Desc[];
#define GPIO_Config(Desc) \
  do { \
    outp32(Desc.Pin.MFP,(inp32(Desc.Pin.MFP) & ~Desc.Pin.Mask) | Desc.Pin.Type); \
    outp32(&SYS->ALT_MFP, (inp32(&SYS->ALT_MFP)  & ~Desc.Pin.ALTMsk));  \
    outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~Desc.Pin.ALT1Msk)); \
    outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~Desc.Pin.ALT2Msk)); \
  }while(0);

#define PWM_MAX_COUNT 8
extern const PWMPinDescription PWM_Desc[];
//#define PWM_Config(Desc) outp32(GPIO_Desc[Desc.pintype.num].Pin.MFP,(inp32(GPIO_Desc[Desc.pintype.num].Pin.MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.Mask) | Desc.pintype.type);
#define PWM_Config(Desc) \
  do{ \
    outp32(GPIO_Desc[Desc.pintype.num].Pin.MFP,(inp32(GPIO_Desc[Desc.pintype.num].Pin.MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.Mask) | Desc.pintype.type); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALTMsk!=0) \
      outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.ALTMsk) | Desc.pintype.AMsk); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALT1Msk!=0) \
      outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.pintype.num].Pin.ALT1Msk) | Desc.pintype.AMsk1); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALT2Msk!=0) \
      outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.pintype.num].Pin.ALT2Msk) | Desc.pintype.AMsk2); \
  }while(0);

#define ADC_MAX_COUNT 8
extern const ADCPinDescription ADC_Desc[];
//#define ADC_Config(Desc) outp32(GPIO_Desc[Desc.pintype.num].Pin.MFP,(inp32(GPIO_Desc[Desc.pintype.num].Pin.MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.Mask) | Desc.pintype.type);
#define ADC_Config(Desc) \
  do { \
    outp32(GPIO_Desc[Desc.pintype.num].Pin.MFP,(inp32(GPIO_Desc[Desc.pintype.num].Pin.MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.Mask) | Desc.pintype.type); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALTMsk!=0) \
      outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP) & ~GPIO_Desc[Desc.pintype.num].Pin.ALTMsk) | Desc.pintype.AMsk); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALT1Msk!=0) \
      outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.pintype.num].Pin.ALT1Msk) | Desc.pintype.AMsk1); \
    if(GPIO_Desc[Desc.pintype.num].Pin.ALT2Msk!=0) \
      outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.pintype.num].Pin.ALT2Msk) | Desc.pintype.AMsk2); \
  }while(0);

#define SPI_MAX_COUNT 1
extern const SPIPinDescription SPI_Desc[];
#define SPI_Config(Desc) \
  do { \
      outp32(GPIO_Desc[Desc.clk.num].Pin.MFP, (inp32(GPIO_Desc[Desc.clk.num].Pin.MFP)  & ~GPIO_Desc[Desc.clk.num].Pin.Mask)  | Desc.clk.type); \
      if(GPIO_Desc[Desc.clk.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.clk.num].Pin.ALTMsk)  | Desc.clk.AMsk); \
      if(GPIO_Desc[Desc.clk.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.clk.num].Pin.ALT1Msk) | Desc.clk.AMsk1); \
      if(GPIO_Desc[Desc.clk.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.clk.num].Pin.ALT2Msk) | Desc.clk.AMsk2); \
      outp32(GPIO_Desc[Desc.mosi.num].Pin.MFP,(inp32(GPIO_Desc[Desc.mosi.num].Pin.MFP) & ~GPIO_Desc[Desc.mosi.num].Pin.Mask) | Desc.mosi.type); \
      if(GPIO_Desc[Desc.mosi.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.mosi.num].Pin.ALTMsk)  | Desc.mosi.AMsk); \
      if(GPIO_Desc[Desc.mosi.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.mosi.num].Pin.ALT1Msk) | Desc.mosi.AMsk1); \
      if(GPIO_Desc[Desc.mosi.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.mosi.num].Pin.ALT2Msk) | Desc.mosi.AMsk2); \
      outp32(GPIO_Desc[Desc.miso.num].Pin.MFP,(inp32(GPIO_Desc[Desc.miso.num].Pin.MFP) & ~GPIO_Desc[Desc.miso.num].Pin.Mask) | Desc.miso.type); \
      if(GPIO_Desc[Desc.miso.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.miso.num].Pin.ALTMsk)  | Desc.miso.AMsk); \
      if(GPIO_Desc[Desc.miso.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.miso.num].Pin.ALT1Msk) | Desc.miso.AMsk1); \
      if(GPIO_Desc[Desc.miso.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.miso.num].Pin.ALT2Msk) | Desc.miso.AMsk2); \
      outp32(GPIO_Desc[Desc.ss.num].Pin.MFP,  (inp32(GPIO_Desc[Desc.ss.num].Pin.MFP)   & ~GPIO_Desc[Desc.ss.num].Pin.Mask)   | Desc.ss.type); \
      if(GPIO_Desc[Desc.ss.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.ss.num].Pin.ALTMsk)  | Desc.ss.AMsk); \
      if(GPIO_Desc[Desc.ss.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.ss.num].Pin.ALT1Msk) | Desc.ss.AMsk1); \
      if(GPIO_Desc[Desc.ss.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.ss.num].Pin.ALT2Msk) | Desc.ss.AMsk2); \
  }while(0);

#define UART_MAX_COUNT 3
extern const UARTPinDescription UART_Desc[];
#define UART_Config(Desc) \
  do { \
      outp32(GPIO_Desc[Desc.rxd.num].Pin.MFP,(inp32(GPIO_Desc[Desc.rxd.num].Pin.MFP) & ~GPIO_Desc[Desc.rxd.num].Pin.Mask) | Desc.rxd.type); \
      if(GPIO_Desc[Desc.rxd.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.rxd.num].Pin.ALTMsk)  | Desc.rxd.AMsk); \
      if(GPIO_Desc[Desc.rxd.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.rxd.num].Pin.ALT1Msk) | Desc.rxd.AMsk1); \
      if(GPIO_Desc[Desc.rxd.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.rxd.num].Pin.ALT2Msk) | Desc.rxd.AMsk2); \
      outp32(GPIO_Desc[Desc.txd.num].Pin.MFP,(inp32(GPIO_Desc[Desc.txd.num].Pin.MFP) & ~GPIO_Desc[Desc.txd.num].Pin.Mask) | Desc.txd.type); \
      if(GPIO_Desc[Desc.txd.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.txd.num].Pin.ALTMsk)  | Desc.txd.AMsk); \
      if(GPIO_Desc[Desc.txd.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.txd.num].Pin.ALT1Msk) | Desc.txd.AMsk1); \
      if(GPIO_Desc[Desc.txd.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.txd.num].Pin.ALT2Msk) | Desc.txd.AMsk2); \
  }while(0);

#define CAN_MAX_COUNT 1
extern const CANPinDescription CAN_Desc[];
#define CAN_RX 0
#define CAN_TX 1
#define CAN_Config(Desc) \
  do { \
    uint8_t i; \
    for(i=0;i<2;i++) \
      outp32(GPIO_Desc[Desc.pintype[i].num].Pin.MFP,(inp32(GPIO_Desc[Desc.pintype[i].num].Pin.MFP) & ~GPIO_Desc[Desc.pintype[i].num].Pin.Mask) | Desc.pintype[i].type); \
  }while(0);

#define I2C_MAX_COUNT 2
extern const I2CPinDescription I2C_Desc[];
#define I2C_Config(Desc) \
  do { \
      outp32(GPIO_Desc[Desc.sda.num].Pin.MFP,(inp32(GPIO_Desc[Desc.sda.num].Pin.MFP) & ~GPIO_Desc[Desc.sda.num].Pin.Mask) | Desc.sda.type); \
      if(GPIO_Desc[Desc.sda.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.sda.num].Pin.ALTMsk)  | Desc.sda.AMsk); \
      if(GPIO_Desc[Desc.sda.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.sda.num].Pin.ALT1Msk) | Desc.sda.AMsk1); \
      if(GPIO_Desc[Desc.sda.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.sda.num].Pin.ALT2Msk) | Desc.sda.AMsk2); \
      outp32(GPIO_Desc[Desc.scl.num].Pin.MFP,(inp32(GPIO_Desc[Desc.scl.num].Pin.MFP) & ~GPIO_Desc[Desc.scl.num].Pin.Mask) | Desc.scl.type); \
      if(GPIO_Desc[Desc.scl.num].Pin.ALTMsk  != NULL)outp32(&SYS->ALT_MFP,(inp32(&SYS->ALT_MFP)   & ~GPIO_Desc[Desc.scl.num].Pin.ALTMsk)  | Desc.scl.AMsk); \
      if(GPIO_Desc[Desc.scl.num].Pin.ALT1Msk != NULL)outp32(&SYS->ALT_MFP1,(inp32(&SYS->ALT_MFP1) & ~GPIO_Desc[Desc.scl.num].Pin.ALT1Msk) | Desc.scl.AMsk1); \
      if(GPIO_Desc[Desc.scl.num].Pin.ALT2Msk != NULL)outp32(&SYS->ALT_MFP2,(inp32(&SYS->ALT_MFP2) & ~GPIO_Desc[Desc.scl.num].Pin.ALT2Msk) | Desc.scl.AMsk2); \
  }while(0);


#endif /*_NUVOTON_TYPEDEF_H_*/