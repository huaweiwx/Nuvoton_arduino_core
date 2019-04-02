/****************************************************************************
 * @file     M481LGAAE(LQFP48)
 * @version  V1.00
 * @Date     2018/10/19-20:44:28 
 * @brief    arduino pin descriptions file
 * Copyright (C) 2018 huaweiwx@sina.com.
*****************************************************************************/

#ifndef _CHIP48_PINLIST_H_
#define _CHIP48_PINLIST_H_

#if USE_ICE >0
  #define CHIP_PIN_LIST \
  PIN(B,5 , 1), /*/EADC0_CH5/ACMP1_N/EBI_ADR0/SD0_DAT3/SPI1_MISO/I2C0_SCL/UART5_TXD/USCI1_CTL0/SC0_CLK/I2S0_BCLK/EPWM0_CH0/TM0/INT0                    */\
  PIN(B,4 , 2), /*/EADC0_CH4/ACMP1_P1/EBI_ADR1/SD0_DAT2/SPI1_MOSI/I2C0_SDA/UART5_RXD/USCI1_CTL1/SC0_DAT/I2S0_MCLK/EPWM0_CH1/TM1/INT1                   */\
  PIN(B,3 , 3), /*/EADC0_CH3/ACMP0_N/EBI_ADR2/SD0_DAT1/SPI1_CLK/UART1_TXD/UART5_nRTS/USCI1_DAT1/SC0_RST/I2S0_DI/EPWM0_CH2/TM2/INT2                     */\
  PIN(B,2 , 4), /*/EADC0_CH2/ACMP0_P1/OPA0_O/EBI_ADR3/SD0_DAT0/SPI1_SS/UART1_RXD/UART5_nCTS/USCI1_DAT0/SC0_PWR/I2S0_DO/EPWM0_CH3/TM3/INT3              */\
  PIN(B,1 , 5), /*/EADC0_CH1/OPA0_N/EBI_ADR8/SD0_CLK/SPI1_I2SMCLK/SPI3_I2SMCLK/UART2_TXD/USCI1_CLK/I2C1_SCL/I2S0_LRCK/EPWM0_CH4/EPWM1_CH4/EPWM0_BRAKE0 */\
  PIN(B,0 , 6), /*/EADC0_CH0/OPA0_P/EBI_ADR9/SD0_CMD/UART2_RXD/SPI0_I2SMCLK/I2C1_SDA/EPWM0_CH5/EPWM1_CH5/EPWM0_BRAKE1                                  */\
  PIN(A,11, 7), /*/ACMP0_P0/EBI_nRD/SC2_PWR/SPI2_SS/SD1_DAT3/USCI0_CLK/I2C2_SCL/BPWM0_CH0/EPWM0_SYNC_OUT/TM0_EXT/DAC1_ST                               */\
  PIN(A,10, 8), /*/ACMP1_P0/OPA1_O/EBI_nWR/SC2_RST/SPI2_CLK/SD1_DAT2/USCI0_DAT0/I2C2_SDA/BPWM0_CH1/QEI1_INDEX/ECAP0_IC0/TM1_EXT/DAC0_ST                */\
  PIN(A,9 , 9), /*/OPA1_N/EBI_MCLK/SC2_DAT/SPI2_MISO/SD1_DAT1/USCI0_DAT1/UART1_TXD/BPWM0_CH2/QEI1_A/ECAP0_IC1/TM2_EXT                                  */\
  PIN(A,8 ,10), /*/OPA1_P/EBI_ALE/SC2_CLK/SPI2_MOSI/SD1_DAT0/USCI0_CTL1/UART1_RXD/BPWM0_CH3/QEI1_B/ECAP0_IC2/TM3_EXT/INT4                              */\
  PIN(F,5 ,11), /*/UART2_RXD/UART2_nCTS/BPWM0_CH4/EPWM0_SYNC_OUT/X32_IN/EADC0_ST                                                                       */\
  PIN(F,4 ,12), /*/UART2_TXD/UART2_nRTS/BPWM0_CH5/X32_OUT                                                                                              */\
  PIN(F,3 ,13), /*/EBI_nCS0/UART0_TXD/I2C0_SCL/XT1_IN/BPWM1_CH0                                                                                        */\
  PIN(F,2 ,14), /*/EBI_nCS1/UART0_RXD/I2C0_SDA/QSPI0_CLK/XT1_OUT/BPWM1_CH1                                                                             */\
  PIN(A,7 ,15), /*/EBI_AD7/SPI1_CLK/SC2_DAT/UART0_TXD/I2C1_SCL/EPWM1_CH4/BPWM1_CH2/ACMP0_WLAT/TM2/INT1                                                 */\
  PIN(A,6 ,16), /*/EBI_AD6/SPI1_SS/SD1_nCD/SC2_CLK/UART0_RXD/I2C1_SDA/EPWM1_CH5/BPWM1_CH3/ACMP1_WLAT/TM3/INT0                                          */\
  PIN(A,5 ,17), /*/SPIM_D2/QSPI0_MISO1/SPI1_I2SMCLK/SD1_CMD/SC2_nCD/UART0_nCTS/UART5_TXD/I2C0_SCL/CAN0_TXD/BPWM0_CH5/EPWM0_CH0/QEI0_INDEX              */\
  PIN(A,4 ,18), /*/SPIM_D3/QSPI0_MOSI1/SPI0_I2SMCLK/SD1_CLK/SC0_nCD/UART0_nRTS/UART5_RXD/I2C0_SDA/CAN0_RXD/BPWM0_CH4/EPWM0_CH1/QEI0_A                  */\
  PIN(A,3 ,19), /*/SPIM_SS/QSPI0_SS/SPI0_SS/SD1_DAT3/SC0_PWR/UART4_TXD/UART1_TXD/I2C1_SCL/BPWM0_CH3/EPWM0_CH2/QEI0_B                                   */\
  PIN(A,2 ,20), /*/SPIM_CLK/QSPI0_CLK/SPI0_CLK/SD1_DAT2/SC0_RST/UART4_RXD/UART1_RXD/I2C1_SDA/BPWM0_CH2/EPWM0_CH3                                       */\
  PIN(A,1 ,21), /*/SPIM_MISO/QSPI0_MISO0/SPI0_MISO/SD1_DAT1/SC0_DAT/UART0_TXD/UART1_nCTS/I2C2_SCL/BPWM0_CH1/EPWM0_CH4/DAC1_ST                          */\
  PIN(A,0 ,22), /*/SPIM_MOSI/QSPI0_MOSI0/SPI0_MOSI/SD1_DAT0/SC0_CLK/UART0_RXD/UART1_nRTS/I2C2_SDA/BPWM0_CH0/EPWM0_CH5/DAC0_ST                          */\
        /* 23      VDDIO                                                                                                                               */\
        /* 24      nRESET                                                                                                                              */\
  /*PIN(F,0 ,25), /UART1_TXD/I2C1_SCL/BPWM1_CH0/ICE_DAT                                                                                                */\
  /*PIN(F,1 ,26), /UART1_RXD/I2C1_SDA/BPWM1_CH1/ICE_CLK                                                                                                */\
  PIN(C,5 ,27), /*/EBI_AD5/SPIM_D2/QSPI0_MISO1/UART2_TXD/I2C1_SCL/CAN0_TXD/UART4_TXD/EPWM1_CH0                                                         */\
  PIN(C,4 ,28), /*/EBI_AD4/SPIM_D3/QSPI0_MOSI1/SC1_nCD/I2S0_BCLK/SPI1_I2SMCLK/UART2_RXD/I2C1_SDA/CAN0_RXD/UART4_RXD/EPWM1_CH1                          */\
  PIN(C,3 ,29), /*/EBI_AD3/SPIM_SS/QSPI0_SS/SC1_PWR/I2S0_MCLK/SPI1_MISO/UART2_nRTS/I2C0_SMBAL/CAN1_TXD/UART3_TXD/EPWM1_CH2                             */\
  PIN(C,2 ,30), /*/EBI_AD2/SPIM_CLK/QSPI0_CLK/SC1_RST/I2S0_DI/SPI1_MOSI/UART2_nCTS/I2C0_SMBSUS/CAN1_RXD/UART3_RXD/EPWM1_CH3                            */\
  PIN(C,1 ,31), /*/EBI_AD1/SPIM_MISO/QSPI0_MISO0/SC1_DAT/I2S0_DO/SPI1_CLK/UART2_TXD/I2C0_SCL/EPWM1_CH4/ACMP0_O                                         */\
  PIN(C,0 ,32), /*/EBI_AD0/SPIM_MOSI/QSPI0_MOSI0/SC1_CLK/I2S0_LRCK/SPI1_SS/UART2_RXD/I2C0_SDA/EPWM1_CH5/ACMP1_O                                        */\
  PIN(A,12,33), /*/I2S0_BCLK/UART4_TXD/I2C1_SCL/SPI2_SS/CAN0_TXD/SC2_PWR/BPWM1_CH2/QEI1_INDEX                                                          */\
  PIN(A,13,34), /*/I2S0_MCLK/UART4_RXD/I2C1_SDA/SPI2_CLK/CAN0_RXD/SC2_RST/BPWM1_CH3/QEI1_A                                                             */\
  PIN(A,14,35), /*/I2S0_DI/UART0_TXD/SPI2_MISO/I2C2_SCL/SC2_DAT/BPWM1_CH4/QEI1_B                                                                       */\
  PIN(A,15,36), /*/I2S0_DO/UART0_RXD/SPI2_MOSI/I2C2_SDA/SC2_CLK/BPWM1_CH5/EPWM0_SYNC_IN                                                                */\
       /*  37      VSS                                                                                                                                 */\
       /*  38      LDO_CAP                                                                                                                             */\
       /*  39      VDD                                                                                                                                 */\
  PIN(C,14,40), /*/EBI_AD11/SC1_nCD/SPI0_I2SMCLK/USCI0_CTL0/QSPI0_CLK/EPWM0_SYNC_IN/TM1                                                                */\
  PIN(B,15,41), /*/EADC0_CH15/EBI_AD12/SC1_PWR/SPI0_SS/USCI0_CTL1/UART0_nCTS/UART3_TXD/I2C2_SMBAL/EPWM1_CH0/TM0_EXT                                    */\
  PIN(B,14,42), /*/EADC0_CH14/EBI_AD13/SC1_RST/SPI0_CLK/USCI0_DAT1/UART0_nRTS/UART3_RXD/I2C2_SMBSUS/EPWM1_CH1/TM1_EXT/CLKO                             */\
  PIN(B,13,43), /*/EADC0_CH13/DAC1_OUT/ACMP0_P3/ACMP1_P3/EBI_AD14/SC1_DAT/SPI0_MISO/USCI0_DAT0/UART0_TXD/UART3_nRTS/I2C2_SCL/EPWM1_CH2/TM2_EXT         */\
  PIN(B,12,44), /*/EADC0_CH12/DAC0_OUT/ACMP0_P2/ACMP1_P2/EBI_AD15/SC1_CLK/SPI0_MOSI/USCI0_CLK/UART0_RXD/UART3_nCTS/I2C2_SDA/SD0_nCD/EPWM1_CH3/TM3_EXT  */\
        /* 45      AVDD                                                                                                                                */\
        /* 46      AVSS                                                                                                                                */\
  PIN(B,7 ,47), /*/EADC0_CH7/EBI_nWRL/USCI1_DAT0/CAN1_TXD/UART1_TXD/SD1_CMD/EBI_nCS0/BPWM1_CH4/EPWM1_BRAKE0/EPWM1_CH4/INT5/ACMP0_O                     */\
  PIN(B,6 ,48)  /*/EADC0_CH6/EBI_nWRH/USCI1_DAT1/CAN1_RXD/UART1_RXD/SD1_CLK/EBI_nCS1/BPWM1_CH5/EPWM1_BRAKE1/EPWM1_CH5/INT4/ACMP1_O                     */

#else /*used ICE*/
  #define CHIP_PIN_LIST \
  PIN(B,5 , 1), /*/EADC0_CH5/ACMP1_N/EBI_ADR0/SD0_DAT3/SPI1_MISO/I2C0_SCL/UART5_TXD/USCI1_CTL0/SC0_CLK/I2S0_BCLK/EPWM0_CH0/TM0/INT0                    */\
  PIN(B,4 , 2), /*/EADC0_CH4/ACMP1_P1/EBI_ADR1/SD0_DAT2/SPI1_MOSI/I2C0_SDA/UART5_RXD/USCI1_CTL1/SC0_DAT/I2S0_MCLK/EPWM0_CH1/TM1/INT1                   */\
  PIN(B,3 , 3), /*/EADC0_CH3/ACMP0_N/EBI_ADR2/SD0_DAT1/SPI1_CLK/UART1_TXD/UART5_nRTS/USCI1_DAT1/SC0_RST/I2S0_DI/EPWM0_CH2/TM2/INT2                     */\
  PIN(B,2 , 4), /*/EADC0_CH2/ACMP0_P1/OPA0_O/EBI_ADR3/SD0_DAT0/SPI1_SS/UART1_RXD/UART5_nCTS/USCI1_DAT0/SC0_PWR/I2S0_DO/EPWM0_CH3/TM3/INT3              */\
  PIN(B,1 , 5), /*/EADC0_CH1/OPA0_N/EBI_ADR8/SD0_CLK/SPI1_I2SMCLK/SPI3_I2SMCLK/UART2_TXD/USCI1_CLK/I2C1_SCL/I2S0_LRCK/EPWM0_CH4/EPWM1_CH4/EPWM0_BRAKE0 */\
  PIN(B,0 , 6), /*/EADC0_CH0/OPA0_P/EBI_ADR9/SD0_CMD/UART2_RXD/SPI0_I2SMCLK/I2C1_SDA/EPWM0_CH5/EPWM1_CH5/EPWM0_BRAKE1                                  */\
  PIN(A,11, 7), /*/ACMP0_P0/EBI_nRD/SC2_PWR/SPI2_SS/SD1_DAT3/USCI0_CLK/I2C2_SCL/BPWM0_CH0/EPWM0_SYNC_OUT/TM0_EXT/DAC1_ST                               */\
  PIN(A,10, 8), /*/ACMP1_P0/OPA1_O/EBI_nWR/SC2_RST/SPI2_CLK/SD1_DAT2/USCI0_DAT0/I2C2_SDA/BPWM0_CH1/QEI1_INDEX/ECAP0_IC0/TM1_EXT/DAC0_ST                */\
  PIN(A,9 , 9), /*/OPA1_N/EBI_MCLK/SC2_DAT/SPI2_MISO/SD1_DAT1/USCI0_DAT1/UART1_TXD/BPWM0_CH2/QEI1_A/ECAP0_IC1/TM2_EXT                                  */\
  PIN(A,8 ,10), /*/OPA1_P/EBI_ALE/SC2_CLK/SPI2_MOSI/SD1_DAT0/USCI0_CTL1/UART1_RXD/BPWM0_CH3/QEI1_B/ECAP0_IC2/TM3_EXT/INT4                              */\
  PIN(F,5 ,11), /*/UART2_RXD/UART2_nCTS/BPWM0_CH4/EPWM0_SYNC_OUT/X32_IN/EADC0_ST                                                                       */\
  PIN(F,4 ,12), /*/UART2_TXD/UART2_nRTS/BPWM0_CH5/X32_OUT                                                                                              */\
  PIN(F,3 ,13), /*/EBI_nCS0/UART0_TXD/I2C0_SCL/XT1_IN/BPWM1_CH0                                                                                        */\
  PIN(F,2 ,14), /*/EBI_nCS1/UART0_RXD/I2C0_SDA/QSPI0_CLK/XT1_OUT/BPWM1_CH1                                                                             */\
  PIN(A,7 ,15), /*/EBI_AD7/SPI1_CLK/SC2_DAT/UART0_TXD/I2C1_SCL/EPWM1_CH4/BPWM1_CH2/ACMP0_WLAT/TM2/INT1                                                 */\
  PIN(A,6 ,16), /*/EBI_AD6/SPI1_SS/SD1_nCD/SC2_CLK/UART0_RXD/I2C1_SDA/EPWM1_CH5/BPWM1_CH3/ACMP1_WLAT/TM3/INT0                                          */\
  PIN(A,5 ,17), /*/SPIM_D2/QSPI0_MISO1/SPI1_I2SMCLK/SD1_CMD/SC2_nCD/UART0_nCTS/UART5_TXD/I2C0_SCL/CAN0_TXD/BPWM0_CH5/EPWM0_CH0/QEI0_INDEX              */\
  PIN(A,4 ,18), /*/SPIM_D3/QSPI0_MOSI1/SPI0_I2SMCLK/SD1_CLK/SC0_nCD/UART0_nRTS/UART5_RXD/I2C0_SDA/CAN0_RXD/BPWM0_CH4/EPWM0_CH1/QEI0_A                  */\
  PIN(A,3 ,19), /*/SPIM_SS/QSPI0_SS/SPI0_SS/SD1_DAT3/SC0_PWR/UART4_TXD/UART1_TXD/I2C1_SCL/BPWM0_CH3/EPWM0_CH2/QEI0_B                                   */\
  PIN(A,2 ,20), /*/SPIM_CLK/QSPI0_CLK/SPI0_CLK/SD1_DAT2/SC0_RST/UART4_RXD/UART1_RXD/I2C1_SDA/BPWM0_CH2/EPWM0_CH3                                       */\
  PIN(A,1 ,21), /*/SPIM_MISO/QSPI0_MISO0/SPI0_MISO/SD1_DAT1/SC0_DAT/UART0_TXD/UART1_nCTS/I2C2_SCL/BPWM0_CH1/EPWM0_CH4/DAC1_ST                          */\
  PIN(A,0 ,22), /*/SPIM_MOSI/QSPI0_MOSI0/SPI0_MOSI/SD1_DAT0/SC0_CLK/UART0_RXD/UART1_nRTS/I2C2_SDA/BPWM0_CH0/EPWM0_CH5/DAC0_ST                          */\
        /* 23   VDDIO                                                                                                                               */\
        /* 24   nRESET                                                                                                                              */\
  PIN(F,0 ,25), /*/UART1_TXD/I2C1_SCL/BPWM1_CH0/ICE_DAT                                                                                                */\
  PIN(F,1 ,26), /*/UART1_RXD/I2C1_SDA/BPWM1_CH1/ICE_CLK                                                                                                */\
  PIN(C,5 ,27), /*/EBI_AD5/SPIM_D2/QSPI0_MISO1/UART2_TXD/I2C1_SCL/CAN0_TXD/UART4_TXD/EPWM1_CH0                                                         */\
  PIN(C,4 ,28), /*/EBI_AD4/SPIM_D3/QSPI0_MOSI1/SC1_nCD/I2S0_BCLK/SPI1_I2SMCLK/UART2_RXD/I2C1_SDA/CAN0_RXD/UART4_RXD/EPWM1_CH1                          */\
  PIN(C,3 ,29), /*/EBI_AD3/SPIM_SS/QSPI0_SS/SC1_PWR/I2S0_MCLK/SPI1_MISO/UART2_nRTS/I2C0_SMBAL/CAN1_TXD/UART3_TXD/EPWM1_CH2                             */\
  PIN(C,2 ,30), /*/EBI_AD2/SPIM_CLK/QSPI0_CLK/SC1_RST/I2S0_DI/SPI1_MOSI/UART2_nCTS/I2C0_SMBSUS/CAN1_RXD/UART3_RXD/EPWM1_CH3                            */\
  PIN(C,1 ,31), /*/EBI_AD1/SPIM_MISO/QSPI0_MISO0/SC1_DAT/I2S0_DO/SPI1_CLK/UART2_TXD/I2C0_SCL/EPWM1_CH4/ACMP0_O                                         */\
  PIN(C,0 ,32), /*/EBI_AD0/SPIM_MOSI/QSPI0_MOSI0/SC1_CLK/I2S0_LRCK/SPI1_SS/UART2_RXD/I2C0_SDA/EPWM1_CH5/ACMP1_O                                        */\
  PIN(A,12,33), /*/I2S0_BCLK/UART4_TXD/I2C1_SCL/SPI2_SS/CAN0_TXD/SC2_PWR/BPWM1_CH2/QEI1_INDEX                                                          */\
  PIN(A,13,34), /*/I2S0_MCLK/UART4_RXD/I2C1_SDA/SPI2_CLK/CAN0_RXD/SC2_RST/BPWM1_CH3/QEI1_A                                                             */\
  PIN(A,14,35), /*/I2S0_DI/UART0_TXD/SPI2_MISO/I2C2_SCL/SC2_DAT/BPWM1_CH4/QEI1_B                                                                       */\
  PIN(A,15,36), /*/I2S0_DO/UART0_RXD/SPI2_MOSI/I2C2_SDA/SC2_CLK/BPWM1_CH5/EPWM0_SYNC_IN                                                                */\
       /*  37     VSS                                                                                                                                 */\
       /*  38     LDO_CAP                                                                                                                             */\
       /*  39     VDD                                                                                                                                 */\
  PIN(C,14,40), /*/EBI_AD11/SC1_nCD/SPI0_I2SMCLK/USCI0_CTL0/QSPI0_CLK/EPWM0_SYNC_IN/TM1                                                                */\
  PIN(B,15,41), /*/EADC0_CH15/EBI_AD12/SC1_PWR/SPI0_SS/USCI0_CTL1/UART0_nCTS/UART3_TXD/I2C2_SMBAL/EPWM1_CH0/TM0_EXT                                    */\
  PIN(B,14,42), /*/EADC0_CH14/EBI_AD13/SC1_RST/SPI0_CLK/USCI0_DAT1/UART0_nRTS/UART3_RXD/I2C2_SMBSUS/EPWM1_CH1/TM1_EXT/CLKO                             */\
  PIN(B,13,43), /*/EADC0_CH13/DAC1_OUT/ACMP0_P3/ACMP1_P3/EBI_AD14/SC1_DAT/SPI0_MISO/USCI0_DAT0/UART0_TXD/UART3_nRTS/I2C2_SCL/EPWM1_CH2/TM2_EXT         */\
  PIN(B,12,44), /*/EADC0_CH12/DAC0_OUT/ACMP0_P2/ACMP1_P2/EBI_AD15/SC1_CLK/SPI0_MOSI/USCI0_CLK/UART0_RXD/UART3_nCTS/I2C2_SDA/SD0_nCD/EPWM1_CH3/TM3_EXT  */\
        /* 45     AVDD                                                                                                                                */\
        /* 46     AVSS                                                                                                                                */\
  PIN(B,7 ,47), /*/EADC0_CH7/EBI_nWRL/USCI1_DAT0/CAN1_TXD/UART1_TXD/SD1_CMD/EBI_nCS0/BPWM1_CH4/EPWM1_BRAKE0/EPWM1_CH4/INT5/ACMP0_O                     */\
  PIN(B,6 ,48)  /*/EADC0_CH6/EBI_nWRH/USCI1_DAT1/CAN1_RXD/UART1_RXD/SD1_CLK/EBI_nCS1/BPWM1_CH5/EPWM1_BRAKE1/EPWM1_CH5/INT4/ACMP1_O                     */
#endif

#define MISO_PIN PB_5
#define MOSI_PIN PB_4
#define  SCK_PIN PB_3
#define   SS_PIN PB_2

#define  SDA_PIN PC_0
#define  SCL_PIN PC_1

#define A0  0
#define A1  1
#define A2  2
#define A3  3
#define A4  4
#define A5  5

#endif
