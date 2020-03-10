/*
 * GPIO_Init.h
 *
 *  Created on: Jan 31, 2020
 *      Author: Islam Ehab
 */

#ifndef GPIO_INIT_H_
#define GPIO_INIT_H_

#define HIGH                1
#define LOW                 0

#define INPUT               0
#define OUTPUT              1

#define PORTA               1
#define PORTB               2
#define PORTC               3
#define PORTD               4
#define PORTE               5
#define PORTF               6

#define PORTA_AHB           7
#define PORTB_AHB           8
#define PORTC_AHB           9
#define PORTD_AHB           10
#define PORTE_AHB           11
#define PORTF_AHB           12

#define NO                  0


#define PIN0                0
#define PIN1                1
#define PIN2                2
#define PIN3                3
#define PIN4                4
#define PIN5                5
#define PIN6                6
#define PIN7                7

#define ANALOG              0
#define DIGITAL             1

#define PULL_UP             0
#define PULL_DOWN           1
#define OPEN_DRAIN          2

#define FALLING             0
#define RISING              1
#define LOW_LEVEL           2
#define HIGH_LEVEL          3


/*************************************/
/*****PORTA Alternative Function******/
#define ALT_A0_U0RX         0x00000001
#define ALT_A0_CAN1RX       0x00000008

#define ALT_A1_U0TX         0x00000010
#define ALT_A1_CAN1TX       0x00000080

#define ALT_A2_SSI0CLK      0x00000200

#define ALT_A3_SSI0FSS      0x00002000

#define ALT_A4_SSI0RX       0x00020000

#define ALT_A5_SSI0TX       0x00200000

#define ALT_A6_I2C1SCL      0x03000000
#define ALT_A6_MIPWM2       0x05000000

#define ALT_A7_I2C1SDA      0x30000000
#define ALT_A7_MIPWM3       0x50000000
/*************************************/


/*************************************/
/*****PORTB Alternative Function******/
#define ALT_B0_U1RX         0x00000001
#define ALT_B0_T2CCP0       0x00000007
#define ALT_B1_U1TX         0x00000010
#define ALT_B1_T2CCP1       0x00000070
#define ALT_B2_T3CCP0       0x00000200
#define ALT_B2_I2C0SCL      0x00000300
#define ALT_B3_T3CCP1       0x00007000
#define ALT_B3_I2C0SDA      0x00003000
#define ALT_B4_T1CCP0       0x00070000
#define ALT_B4_CAN0RX       0x00080000
#define ALT_B4_SSI2CLK      0x00020000
#define ALT_B4_M0PWM2       0x00040000
#define ALT_B5_TICCP1       0x00700000
#define ALT_B5_CAN0TX       0x00800000
#define ALT_B5_SSI2FSS      0x00200000
#define ALT_B5_M0PWM3       0x00400000
#define ALT_B6_T0CCP0       0x07000000
#define ALT_B6_SSI2RX       0x02000000
#define ALT_B6_M0PWM0       0x04000000
#define ALT_B7_SSI2TX       0x20000000
#define ALT_B7_T0CCP1       0x70000000
#define ALT_B7_M0PWM1       0x40000000
/*************************************/


/*************************************/
/*****PORTC Alternative Function******/
#define ALT_C0_TCK_SWCLK    0x00000001
#define ALT_C0_T4CCP0       0x00000007
#define ALT_C1_TMS_SWDIO    0x00000010
#define ALT_C1_T4CCP1       0x00000070
#define ALT_C2_TDI          0x00000100
#define ALT_C2_T5CCP0       0x00000700
#define ALT_C3_TDO_SWO      0x00001000
#define ALT_C3_T5CCP1       0x00007000
#define ALT_C4_U4RX         0x00010000
#define ALT_C4_U1RX         0x00020000
#define ALT_C4_M0PWM6       0x00040000
#define ALT_C4_IDX1         0x00060000
#define ALT_C4_WT0CCP0      0x00070000
#define ALT_C4_U1RTS        0x00080000
#define ALT_C5_U4TX         0x00100000
#define ALT_C5_U1TX         0x00200000
#define ALT_C5_M0PWM7       0x00400000
#define ALT_C5_PHA1         0x00600000
#define ALT_C5_WT0CCP1      0x00700000
#define ALT_C5_U1CTS        0x00800000
#define ALT_C6_U3RX         0x01000000
#define ALT_C6_PHB1         0x06000000
#define ALT_C6_WT1CCP0      0x07000000
#define ALT_C6_USB0EPEN     0x08000000
#define ALT_C7_U3TX         0x10000000
#define ALT_C7_WT1CCP1      0x70000000
#define ALT_C7_USB0PFLT     0x80000000
/*************************************/


/*************************************/
/*****PORTD Alternative Function******/
#define ALT_D0_SSI3CLK      0x00000001
#define ALT_D0_SSI1CLK      0x00000002
#define ALT_D0_I2C3SCL      0x00000003
#define ALT_D0_M0PWM6       0x00000004
#define ALT_D0_M1PWM0       0x00000005
#define ALT_D0_WT2CCP0      0x00000007

#define ALT_D1_SSI3FSS      0x00000010
#define ALT_D1_SSI1FSS      0x00000020
#define ALT_D1_I2C3SDA      0x00000030
#define ALT_D1_M0PWM7       0x00000040
#define ALT_D1_M1PWM1       0x00000050
#define ALT_D1_WT2CCP1      0x00000070

#define ALT_D2_SSI3RX       0x00000100
#define ALT_D2_SSI1RX       0x00000200
#define ALT_D2_M0FAULT      0x00000400
#define ALT_D2_WT3CCP0      0x00000700
#define ALT_D2_USB0EPEN     0x00000800

#define ALT_D3_SSI3TX       0x00001000
#define ALT_D3_SSI1TX       0x00002000
#define ALT_D3_IDX0         0x00006000
#define ALT_D3_WT3CCP1      0x00007000
#define ALT_D3_USB0PFLT     0x00008000

#define ALT_D4_U6RX         0x00010000
#define ALT_D4_WT4CCP0      0x00070000

#define ALT_D5_U6TX         0x00100000
#define ALT_D5_WT4CCP1      0x00700000

#define ALT_D6_U2RX         0x01000000
#define ALT_D6_M0FAULT0     0x04000000
#define ALT_D6_PHA0         0x06000000
#define ALT_D6_WT5CCP0      0x07000000

#define ALT_D7_U2TX         0x10000000
#define ALT_D7_PHB0         0x60000000
#define ALT_D7_WT5CCP1      0x70000000
#define ALT_D7_NMI          0x80000000
/*************************************/


/*************************************/
/*****PORTE Alternative Function******/
#define ALT_E0_U7RX         0x00000001

#define ALT_E1_U7TX         0x00000010

#define ALT_E4_U5RX         0x00010000
#define ALT_E4_I2C2SCL      0x00030000
#define ALT_E4_M0PWM4       0x00040000
#define ALT_E4_M1PWM2       0x00050000
#define ALT_E4_CAN0RX       0x00080000

#define ALT_E5_U5TX         0x00100000
#define ALT_E5_I2C2SDA      0x00300000
#define ALT_E5_M0PWM5       0x00400000
#define ALT_E5_M1PWM3       0x00500000
#define ALT_E5_CAN0TX       0x00600000
/*************************************/


/*************************************/
/*****PORTF Alternative Function******/
#define ALT_F0_U1RTS        0x00000001
#define ALT_F0_SSI1RX       0x00000002
#define ALT_F0_CAN0RX       0x00000003
#define ALT_F0_M1PWM4       0x00000005
#define ALT_F0_PHA0         0x00000006
#define ALT_F0_T0CCP0       0x00000007
#define ALT_F0_NMI          0x00000008
#define ALT_F0_C0O          0x00000009

#define ALT_F1_U1CTS        0x00000010
#define ALT_F1_SSI1TX       0x00000020
#define ALT_F1_M1PWM5       0x00000050
#define ALT_F1_PHB0         0x00000060
#define ALT_F1_T0CCP1       0x00000070
#define ALT_F1_C1O          0x00000090
#define ALT_F1_TRD1         0x000000E0

#define ALT_F2_SSI1CLK      0x00000200
#define ALT_F2_M0FAULT0     0x00000400
#define ALT_F2_M1PWM6       0x00000500
#define ALT_F2_T1CCP0       0x00000700
#define ALT_F2_TRD0         0x00000E00

#define ALT_F3_SSIFSS       0x00002000
#define ALT_F3_CAN0TX       0x00003000
#define ALT_F3_M1PWM7       0x00005000
#define ALT_F3_T1CCP1       0x00007000
#define ALT_F3_TRCLK        0x0000E000

#define ALT_F4_M1FAULT0     0x00050000
#define ALT_F4_IDX0         0x00060000
#define ALT_F4_T2CCP0       0x00070000
#define ALT_F4_USB0EPEN     0x00080000
/*************************************/




void vidGPIO_SetPinDirection(u8 u8Port, u8 u8Pin, u8 u8Dir);
void vidGPIO_SetPinConfig(u8 u8Port, u8 u8Pin, u8 u8SignalMode, u8 u8alternative);
void vidGPIO_SetPinValue(u8 u8Port, u8 u8Pin, u8 u8Val);
void vidGPIO_SetResistorMode(u8 u8Port, u8 u8Pin, u8 u8Mode);





#endif /* GPIO_INIT_H_ */
