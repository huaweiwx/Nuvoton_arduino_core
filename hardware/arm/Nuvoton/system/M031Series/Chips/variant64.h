/*
  variant64.h
  
  Copyright (c) 2018 huaweiwx@sina.com 2018.11.1

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/
#pragma GCC diagnostic ignored "-Wconversion-null"

#define MFP_NULL {NULL, NULL, {NULL, NULL, NULL}}
#define MFP_PN(a,b,c) {P##a,BIT##b,{(uint32_t)&SYS->GP##a##_MFP##c, \
                                     SYS_GP##a##_MFP##c##_P##a##b##MFP_Msk, \
					                 SYS_GP##a##_MFP##c##_P##a##b##MFP_GPIO}}

#ifndef GPIO_DESC_USERDEF
const GPIOPinDescription GPIO_Desc[] =
{
  MFP_NULL,         //0
  MFP_PN(B, 6, L),  //1   ADC0_CH6/EBI_nWRH/UART1_RXD/EBI_nCS1/PWM1_BRAKE1/PWM1_CH5/INT4/ACMP1_O
  MFP_PN(B, 5, L),  //2   ADC0_CH5/ACMP1_N/I2C0_SCL/PWM0_CH0/UART2_TXD/TM0/INT0                 
  MFP_PN(B, 4, L),  //3   ADC0_CH4/ACMP1_P1/I2C0_SDA/PWM0_CH1/UART2_RXD/TM1/INT1                
  MFP_PN(B, 3, L),  //4   ADC0_CH3/ACMP0_N/I2C1_SCL/UART1_TXD/PWM0_CH2/PWM0_BRAKE0/TM2/INT2     
  MFP_PN(B, 2, L),  //5   ADC0_CH2/ACMP0_P1/I2C1_SDA/UART1_RXD/PWM0_CH3/TM3/INT3                
  MFP_PN(B, 1, L),  //6   ADC0_CH1/UART2_TXD/I2C1_SCL/PWM0_CH4/PWM1_CH4/PWM0_BRAKE0             
  MFP_PN(B, 0, L),  //7   ADC0_CH0/UART2_RXD/SPI0_I2SMCLK/I2C1_SDA/PWM0_CH5/PWM1_CH5/PWM0_BRAKE1
  MFP_PN(A, 11,H),  //8   ACMP0_P0/EBI_nRD/USCI0_CLK/TM0_EXT                                    
  MFP_PN(A, 10,H),  //9   ACMP1_P0/EBI_nWR/USCI0_DAT0/TM1_EXT                                   
  MFP_PN(A, 9 ,H),  //10  EBI_MCLK/USCI0_DAT1/UART1_TXD/TM2_EXT                                 
  MFP_PN(A, 8 ,H),  //11  EBI_ALE/USCI0_CTL1/UART1_RXD/TM3_EXT/INT4                             
  MFP_PN(F, 6, L),  //12  EBI_ADR19/SPI0_MOSI/EBI_nCS0                                          
  MFP_PN(F, 14,H),  //13  PWM1_BRAKE0/PWM0_BRAKE0/PWM0_CH4/CLKO/TM3/INT5                        
  MFP_PN(F, 5, L),  //14  UART2_RXD/UART2_nCTS/PWM0_CH0/X32_IN/ADC0_ST                          
  MFP_PN(F, 4, L),  //15  UART2_TXD/UART2_nRTS/PWM0_CH1/X32_OUT                                 
  MFP_PN(F, 3, L),  //16  EBI_nCS0/UART0_TXD/I2C0_SCL/XT1_IN                                    
  MFP_PN(F, 2, L),  //17  EBI_nCS1/UART0_RXD/I2C0_SDA/XT1_OUT                                   
  MFP_PN(C, 7, L),  //18  EBI_AD9/UART0_nCTS/PWM1_CH2/TM0/INT3                                  
  MFP_PN(C, 6, L),  //19  EBI_AD8/UART0_nRTS/PWM1_CH3/TM1/INT2                                  
  MFP_PN(A, 7, L),  //20  EBI_AD7/UART0_TXD/I2C1_SCL/PWM1_CH4/ACMP0_WLAT/TM2/INT1               
  MFP_PN(A, 6, L),  //21  EBI_AD6/UART0_RXD/I2C1_SDA/PWM1_CH5/ACMP1_WLAT/TM3/INT0               
  MFP_NULL       ,  //22  VSS                                                                   
  MFP_NULL       ,  //23  VDD                                                                   
  MFP_PN(D, 15,H),  //24  PWM0_CH5/TM3/INT1                                                     
  MFP_PN(A, 5, L),  //25  UART0_nCTS/UART0_TXD/I2C0_SCL/PWM0_CH0                                
  MFP_PN(A, 4, L),  //26  SPI0_I2SMCLK/UART0_nRTS/UART0_RXD/I2C0_SDA/PWM0_CH1                   
  MFP_PN(A, 3, L),  //27  SPI0_SS/UART1_TXD/I2C1_SCL/PWM0_CH2/CLKO/PWM1_BRAKE1                  
  MFP_PN(A, 2, L),  //28  SPI0_CLK/UART1_RXD/I2C1_SDA/PWM0_CH3                                  
  MFP_PN(A, 1, L),  //29  SPI0_MISO/UART0_TXD/UART1_nCTS/PWM0_CH4                               
  MFP_PN(A, 0, L),  //30  SPI0_MOSI/UART0_RXD/UART1_nRTS/PWM0_CH5                               
  MFP_PN(F, 15,H),  //31  PWM0_BRAKE0/PWM0_CH1/TM2/CLKO/INT4                                    
  MFP_NULL       ,  //32  nRESET                                                                
#if USE_ICE == 0                                            
  MFP_PN(F, 0, L),  //33  UART1_TXD/I2C1_SCL/UART0_TXD/ICE_DAT                                  
  MFP_PN(F, 1, L),  //34  UART1_RXD/I2C1_SDA/UART0_RXD/ICE_CLK
#else                                                                                         
  MFP_NULL       ,  //33  UART1_TXD/I2C1_SCL/UART0_TXD/ICE_DAT
  MFP_NULL       ,  //34  UART1_RXD/I2C1_SDA/UART0_RXD/ICE_CLK                                       
#endif                                       
  MFP_PN(C, 5, L),  //35  EBI_AD5/UART2_TXD/I2C1_SCL/PWM1_CH0                                                 
  MFP_PN(C, 4, L),  //36  EBI_AD4/UART2_RXD/I2C1_SDA/PWM1_CH1                                                 
  MFP_PN(C, 3, L),  //37  EBI_AD3/UART2_nRTS/PWM1_CH2                                                         
  MFP_PN(C, 2, L),  //38  EBI_AD2/UART2_nCTS/PWM1_CH3                                                         
  MFP_PN(C, 1, L),  //39  EBI_AD1/UART2_TXD/I2C0_SCL/PWM1_CH4/ACMP0_O                                         
  MFP_PN(C, 0, L),  //40  EBI_AD0/UART2_RXD/I2C0_SDA/PWM1_CH5/ACMP1_O                                         
  MFP_PN(D, 3, L),  //41  EBI_AD10/USCI0_CTL1/SPI0_SS/UART0_TXD                                               
  MFP_PN(D, 2, L),  //42  EBI_AD11/USCI0_DAT1/SPI0_CLK/UART0_RXD                                              
  MFP_PN(D, 1, L),  //43  EBI_AD12/USCI0_DAT0/SPI0_MISO                                                       
  MFP_PN(D, 0, L),  //44  EBI_AD13/USCI0_CLK/SPI0_MOSI/TM2                                                    
  MFP_PN(A, 12,H),  //45  I2C1_SCL                                                                            
  MFP_PN(A, 13,H),  //46  I2C1_SDA                                                                            
  MFP_PN(A, 14,H),  //47  UART0_TXD                                                                           
  MFP_PN(A, 15,H),  //48  UART0_RXD                                                                           
  MFP_NULL       ,  //49  VSS                                                                                 
  MFP_NULL       ,  //50  LDO_CAP                                                                             
  MFP_NULL       ,  //51  VDD                                                                                 
  MFP_PN(C, 14,H),  //52  EBI_AD11/SPI0_I2SMCLK/USCI0_CTL0/TM1                                                
  MFP_PN(B, 15,H),  //53  ADC0_CH15/EBI_AD12/SPI0_SS/USCI0_CTL1/UART0_nCTS/PWM1_CH0/TM0_EXT/PWM0_BRAKE1       
  MFP_PN(B, 14,H),  //54  ADC0_CH14/EBI_AD13/SPI0_CLK/USCI0_DAT1/UART0_nRTS/PWM1_CH1/TM1_EXT/CLKO             
  MFP_PN(B, 13,H),  //55  ADC0_CH13/ACMP0_P3/ACMP1_P3/EBI_AD14/SPI0_MISO/USCI0_DAT0/UART0_TXD/PWM1_CH2/TM2_EXT
  MFP_PN(B, 12,H),  //56  ADC0_CH12/ACMP0_P2/ACMP1_P2/EBI_AD15/SPI0_MOSI/USCI0_CLK/UART0_RXD/PWM1_CH3/TM3_EXT 
  MFP_NULL       ,  //57  AVDD                                                                                
  MFP_NULL       ,  //58  VREF                                                                                
  MFP_NULL       ,  //59  AVSS                                                                                
  MFP_PN(B, 11,H),  //60  ADC0_CH11/EBI_ADR16/UART0_nCTS/I2C1_SCL/SPI0_I2SMCLK                                
  MFP_PN(B, 10,H),  //61  ADC0_CH10/EBI_ADR17/UART0_nRTS/I2C1_SDA                                             
  MFP_PN(B, 9, H),  //62  ADC0_CH9/EBI_ADR18/UART0_TXD/UART1_nCTS                                             
  MFP_PN(B, 8, H),  //63  ADC0_CH8/EBI_ADR19/UART0_RXD/UART1_nRTS                                             
  MFP_PN(B, 7, L),  //64  ADC0_CH7/EBI_nWRL/UART1_TXD/EBI_nCS0/PWM1_BRAKE0/PWM1_CH4/INT5/ACMP0_O              
};
#endif

#ifndef PWM_DESC_USERDEF
const PWMPinDescription PWM_Desc[]={
    {PWM0,PWM0_MODULE,PWM0_IRQn,1, 500,{PA_0, SYS_GPA_MFPL_PA0MFP_PWM0_CH5 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,2, 500,{PA_1, SYS_GPA_MFPL_PA1MFP_PWM0_CH4 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,3, 500,{PA_2, SYS_GPA_MFPL_PA2MFP_PWM0_CH3 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,4, 500,{PA_3, SYS_GPA_MFPL_PA3MFP_PWM0_CH2 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,5, 500,{PA_4, SYS_GPA_MFPL_PA4MFP_PWM0_CH1 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,6, 500,{PA_5, SYS_GPA_MFPL_PA5MFP_PWM0_CH0 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,7, 500,{PB_0, SYS_GPB_MFPL_PB0MFP_PWM0_CH5 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,8, 500,{PB_1, SYS_GPB_MFPL_PB1MFP_PWM0_CH4 }},
    {PWM0,PWM0_MODULE,PWM0_IRQn,9, 500,{PB_2, SYS_GPB_MFPL_PB2MFP_PWM0_CH3 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,11,500,{PB_3, SYS_GPB_MFPL_PB3MFP_PWM0_CH2 }},
    {PWM0,PWM0_MODULE,PWM0_IRQn,12,500,{PB_4, SYS_GPB_MFPL_PB4MFP_PWM0_CH1 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,13,500,{PB_5, SYS_GPB_MFPL_PB5MFP_PWM0_CH0 }},
    {PWM0,PWM0_MODULE,PWM0_IRQn,14,500,{PD_15,SYS_GPD_MFPH_PD15MFP_PWM0_CH5}},  
    {PWM0,PWM0_MODULE,PWM0_IRQn,15,500,{PF_4, SYS_GPF_MFPL_PF4MFP_PWM0_CH1 }}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,16,500,{PF_5, SYS_GPF_MFPL_PF5MFP_PWM0_CH0 }},
    {PWM0,PWM0_MODULE,PWM0_IRQn,17,500,{PF_14,SYS_GPF_MFPH_PF14MFP_PWM0_CH4}}, 
    {PWM0,PWM0_MODULE,PWM0_IRQn,18,500,{PF_15,SYS_GPF_MFPH_PF15MFP_PWM0_CH1}}, 
    {PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PA_6 ,SYS_GPA_MFPL_PA6MFP_PWM1_CH5 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PA_7 ,SYS_GPA_MFPL_PA7MFP_PWM1_CH4 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_0 ,SYS_GPB_MFPL_PB0MFP_PWM1_CH5 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_1 ,SYS_GPB_MFPL_PB1MFP_PWM1_CH4 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_6 ,SYS_GPB_MFPL_PB6MFP_PWM1_CH5 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_7 ,SYS_GPB_MFPL_PB7MFP_PWM1_CH4 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_12,SYS_GPB_MFPH_PB12MFP_PWM1_CH3}},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_13,SYS_GPB_MFPH_PB13MFP_PWM1_CH2}},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_14,SYS_GPB_MFPH_PB14MFP_PWM1_CH1}},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PB_15,SYS_GPB_MFPH_PB15MFP_PWM1_CH0}},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_0 ,SYS_GPC_MFPL_PC0MFP_PWM1_CH5 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_1 ,SYS_GPC_MFPL_PC1MFP_PWM1_CH4 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_2 ,SYS_GPC_MFPL_PC2MFP_PWM1_CH3 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_3 ,SYS_GPC_MFPL_PC3MFP_PWM1_CH2 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_4 ,SYS_GPC_MFPL_PC4MFP_PWM1_CH1 }},
	{PWM1,PWM1_MODULE,PWM1_IRQn,19,500,{PC_5 ,SYS_GPC_MFPL_PC5MFP_PWM1_CH0 }},
	{PWM0,PWM1_MODULE,PWM1_IRQn,19,500,{PC_6 ,SYS_GPC_MFPL_PC6MFP_PWM1_CH3 }},
	{PWM0,PWM1_MODULE,PWM1_IRQn,19,500,{PC_7 ,SYS_GPC_MFPL_PC7MFP_PWM1_CH2 }},
};
#endif

#ifndef ADC_DESC_USERDEF
const ADCPinDescription ADC_Desc[]={
	{ADC,ADC_MODULE,0 ,{PB_0   ,SYS_GPB_MFPL_PB0MFP_ADC_CH0   }},
	{ADC,ADC_MODULE,1 ,{PB_1   ,SYS_GPB_MFPL_PB1MFP_ADC_CH1   }},
	{ADC,ADC_MODULE,2 ,{PB_2   ,SYS_GPB_MFPL_PB2MFP_ADC_CH2   }},
	{ADC,ADC_MODULE,3 ,{PB_3   ,SYS_GPB_MFPL_PB3MFP_ADC_CH3   }},
	{ADC,ADC_MODULE,4 ,{PB_4   ,SYS_GPB_MFPL_PB4MFP_ADC_CH4   }},
	{ADC,ADC_MODULE,5 ,{PB_5   ,SYS_GPB_MFPL_PB5MFP_ADC_CH5   }},
	{ADC,ADC_MODULE,6 ,{PB_6   ,SYS_GPB_MFPL_PB6MFP_ADC_CH6   }},
	{ADC,ADC_MODULE,7 ,{PB_7   ,SYS_GPB_MFPL_PB7MFP_ADC_CH7   }},
	{ADC,ADC_MODULE,8 ,{PB_8   ,SYS_GPB_MFPH_PB8MFP_ADC_CH8   }},
	{ADC,ADC_MODULE,9 ,{PB_9   ,SYS_GPB_MFPH_PB9MFP_ADC_CH9   }},
	{ADC,ADC_MODULE,10,{PB_10  ,SYS_GPB_MFPH_PB10MFP_ADC_CH10 }},
	{ADC,ADC_MODULE,11,{PB_11  ,SYS_GPB_MFPH_PB11MFP_ADC_CH11 }},
	{ADC,ADC_MODULE,12,{PB_12  ,SYS_GPB_MFPH_PB12MFP_ADC_CH12 }},
	{ADC,ADC_MODULE,13,{PB_13  ,SYS_GPB_MFPH_PB13MFP_ADC_CH13 }},
	{ADC,ADC_MODULE,14,{PB_14  ,SYS_GPB_MFPH_PB14MFP_ADC_CH14 }},
	{ADC,ADC_MODULE,15,{PB_15  ,SYS_GPB_MFPH_PB15MFP_ADC_CH15 }},
};
#endif

#ifndef UART_DESC_USERDEF
const UARTPinAlt_TypeDef UART0PinAlt[] = {
  {{PB_12,SYS_GPB_MFPH_PB12MFP_UART0_RXD},{PB_13,SYS_GPB_MFPH_PB13MFP_UART0_TXD}},	
  {{PA_0 ,SYS_GPA_MFPL_PA0MFP_UART0_RXD },{PA_1 ,SYS_GPA_MFPL_PA1MFP_UART0_TXD }},	
  {{PA_4 ,SYS_GPA_MFPL_PA4MFP_UART0_RXD },{PA_5 ,SYS_GPA_MFPL_PA5MFP_UART0_TXD }},	
  {{PA_6 ,SYS_GPA_MFPL_PA6MFP_UART0_RXD },{PA_7 ,SYS_GPA_MFPL_PA7MFP_UART0_TXD }},	
  {{PA_15,SYS_GPA_MFPH_PA15MFP_UART0_RXD},{PA_14,SYS_GPA_MFPH_PA14MFP_UART0_TXD}},	
  {{PB_8 ,SYS_GPB_MFPH_PB8MFP_UART0_RXD },{PB_9 ,SYS_GPB_MFPH_PB9MFP_UART0_TXD }},	
  {{PD_2 ,SYS_GPD_MFPL_PD2MFP_UART0_RXD },{PD_3 ,SYS_GPD_MFPL_PD3MFP_UART0_TXD }},	
//  {{PF_1 ,SYS_GPF_MFPL_PF1MFP_UART0_RXD },{PF_0 ,SYS_GPF_MFPL_PF0MFP_UART0_TXD }},	
  {{PF_2 ,SYS_GPF_MFPL_PF2MFP_UART0_RXD },{PF_3 ,SYS_GPF_MFPL_PF3MFP_UART0_TXD }},	
};

const UARTPinAlt_TypeDef UART1PinAlt[] = {
  {{PB_2,SYS_GPB_MFPL_PB2MFP_UART1_RXD},{PB_3,SYS_GPB_MFPL_PB3MFP_UART1_TXD}},
  {{PA_2,SYS_GPA_MFPL_PA2MFP_UART1_RXD},{PA_3,SYS_GPA_MFPL_PA3MFP_UART1_TXD}},
  {{PA_8,SYS_GPA_MFPH_PA8MFP_UART1_RXD},{PA_9,SYS_GPA_MFPH_PA9MFP_UART1_TXD}},
  {{PB_6,SYS_GPB_MFPL_PB6MFP_UART1_RXD},{PB_7,SYS_GPB_MFPL_PB7MFP_UART1_TXD}},
//{{PF_1,SYS_GPF_MFPL_PF1MFP_UART1_RXD},{PF_0,SYS_GPF_MFPL_PF0MFP_UART1_TXD}},
};

const UARTPinAlt_TypeDef UART2PinAlt[] = {
  {{PB_0,SYS_GPB_MFPL_PB0MFP_UART2_RXD},{PB_1,SYS_GPB_MFPL_PB1MFP_UART2_TXD}}, 
  {{PB_4,SYS_GPB_MFPL_PB4MFP_UART2_RXD},{PB_5,SYS_GPB_MFPL_PB5MFP_UART2_TXD}}, 
  {{PC_0,SYS_GPC_MFPL_PC0MFP_UART2_RXD},{PC_1,SYS_GPC_MFPL_PC1MFP_UART2_TXD}},
  {{PC_4,SYS_GPC_MFPL_PC4MFP_UART2_RXD},{PC_5,SYS_GPC_MFPL_PC5MFP_UART2_TXD}}, 
  {{PF_5,SYS_GPF_MFPL_PF5MFP_UART2_RXD},{PF_4,SYS_GPF_MFPL_PF4MFP_UART2_TXD}},
};

const UARTPinDescription UART_Desc[]={
   {UART0,UART0_MODULE,UART02_IRQn,UART0PinAlt},
   {UART1,UART1_MODULE,UART1_IRQn, UART1PinAlt},
   {UART2,UART2_MODULE,UART02_IRQn,UART2PinAlt},
};
#endif

#ifndef SPI_DESC_USERDEF
const SPIPinAlt_TypeDef SPI0PinAlt[] = { 
	{{PA_2 ,SYS_GPA_MFPL_PA2MFP_SPI0_CLK },{PA_1 ,SYS_GPA_MFPL_PA1MFP_SPI0_MISO },{PA_0 ,SYS_GPA_MFPL_PA0MFP_SPI0_MOSI },{PA_3 ,SYS_GPA_MFPL_PA3MFP_SPI0_SS }},
    {{PB_14,SYS_GPB_MFPH_PB14MFP_SPI0_CLK},{PB_13,SYS_GPB_MFPH_PB13MFP_SPI0_MISO},{PB_12,SYS_GPB_MFPH_PB12MFP_SPI0_MOSI},{PB_15,SYS_GPB_MFPH_PB15MFP_SPI0_SS}}, 
	{{PD_2 ,SYS_GPD_MFPL_PD2MFP_SPI0_CLK },{PD_1 ,SYS_GPD_MFPL_PD1MFP_SPI0_MISO },{PD_0 ,SYS_GPD_MFPL_PD0MFP_SPI0_MOSI },{PD_3 ,SYS_GPD_MFPL_PD3MFP_SPI0_SS }},
};
const SPIPinDescription SPI_Desc[]={
  {SPI0,SPI0_MODULE,SPI0_IRQn,CLK_CLKSEL2_SPI0SEL_PCLK1, SPI0PinAlt},
};
#endif

#ifndef I2C_DESC_USERDEF
const I2CPinAlt_TypeDef I2C0PinAlt[] = {
  {{PA_4 ,SYS_GPA_MFPL_PA4MFP_I2C0_SDA },{PA_5 ,SYS_GPA_MFPL_PA5MFP_I2C0_SCL}},
  {{PB_4 ,SYS_GPB_MFPL_PB4MFP_I2C0_SDA },{PB_5 ,SYS_GPB_MFPL_PB5MFP_I2C0_SCL}},
  {{PC_0 ,SYS_GPC_MFPL_PC0MFP_I2C0_SDA },{PC_1 ,SYS_GPC_MFPL_PC1MFP_I2C0_SCL}},
  {{PF_2 ,SYS_GPF_MFPL_PF2MFP_I2C0_SDA },{PF_3 ,SYS_GPF_MFPL_PF3MFP_I2C0_SCL}},
};
const I2CPinAlt_TypeDef I2C1PinAlt[] = {
 {{PA_2 ,SYS_GPA_MFPL_PA2MFP_I2C1_SDA },{PA_3 ,SYS_GPA_MFPL_PA3MFP_I2C1_SCL }},
 {{PA_6 ,SYS_GPA_MFPL_PA6MFP_I2C1_SDA },{PA_7 ,SYS_GPA_MFPL_PA7MFP_I2C1_SCL }},
 {{PA_13,SYS_GPA_MFPH_PA13MFP_I2C1_SDA},{PA_12,SYS_GPA_MFPH_PA12MFP_I2C1_SCL}},
 {{PB_0 ,SYS_GPB_MFPL_PB0MFP_I2C1_SDA },{PB_1 ,SYS_GPB_MFPL_PB1MFP_I2C1_SCL }},
 {{PB_2 ,SYS_GPB_MFPL_PB2MFP_I2C1_SDA },{PB_3 ,SYS_GPB_MFPL_PB3MFP_I2C1_SCL }},
 {{PB_10,SYS_GPB_MFPH_PB10MFP_I2C1_SDA},{PB_11,SYS_GPB_MFPH_PB11MFP_I2C1_SCL}},
 {{PC_4 ,SYS_GPC_MFPL_PC4MFP_I2C1_SDA },{PC_5 ,SYS_GPC_MFPL_PC5MFP_I2C1_SCL }},
};
const I2CPinDescription I2C_Desc[]={	
 {I2C0,I2C0_MODULE,I2C0_IRQn,I2C0PinAlt},
 {I2C1,I2C1_MODULE,I2C1_IRQn,I2C1PinAlt},
};
#endif
