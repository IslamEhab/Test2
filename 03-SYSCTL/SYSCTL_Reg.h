/*
 * SYSCTL_Reg.h
 *
 *  Created on: Feb 8, 2020
 *      Author: Islam Ehab
 */

#ifndef SYSCTL_REG_H_
#define SYSCTL_REG_H_

typedef struct{

    u32 DID0;           //Device Identification 0
    u32 DID1;           //Device Identification 1
    u32 DC0;            //Device Capabilities   0
    u32 RES0;
    u32 DC1;            //Device Capabilities   1
    u32 DC2;            //Device Capabilities   2
    u32 DC3;            //Device Capabilities   3
    u32 DC4;            //Device Capabilities   4
    u32 DC5;            //Device Capabilities   5
    u32 DC6;            //Device Capabilities   6
    u32 DC7;            //Device Capabilities   7
    u32 DC8;            //Device Capabilities   8

    u32 PBORCTL;        //Brown Out Reset Control
    u32 RES1[3];

    u32 SRCR0;          //Software Reset Control 0
    u32 SRCR1;          //Software Reset Control 1
    u32 SRCR2;          //Software Reset Control 2
    u32 res1;

    u32 RIS;            //Raw INT Status
    u32 IMC;            //INT Mask Control
    u32 MISC;           //Masked INT Status and Clear
    u32 RESC;           //Reset Cause
    u32 RCC;            //Run-Mode Clock Configuration
    u32 RES2[2];
    u32 GPIOHBCTL;      //GPIO High-Performance Bus Control
    u32 RCC2;           //Run-Mode Clock Configuration 2
    u32 RES3[2];
    u32 MOSCCTL;        //Main Oscillator Control
    u32 RES4[32];

    u32 RCGC0;          //Run Mode Clock Gating Control Register 0
    u32 RCGC1;          //Run Mode Clock Gating Control Register 1
    u32 RCGC2;          //Run Mode Clock Gating Control Register 2
    u32 res2;
    u32 SCGC0;          //Sleep Mode Clock Gating Control Register 0
    u32 SCGC1;          //Sleep Mode Clock Gating Control Register 1
    u32 SCGC2;          //Sleep Mode Clock Gating Control Register 2
    u32 res3;
    u32 DCGCO;          //Deep Sleep Mode Clock Gating Control Register 0
    u32 DCGC1;          //Deep Sleep Mode Clock Gating Control Register 1
    u32 DCGC2;          //Deep Sleep Mode Clock Gating Control Register 2
    u32 res4[6];


    u32 DSLPCLKCFG;     //Deep Sleep Clock Configuration
    u32 RES5;
    u32 SYSPROP;        //System Properties
    u32 PIOSCCAL;       //Precision Internal Oscillator Calibration
    u32 PIOSCSTAT;      //Precision Internal Oscillator Statistics
    u32 RES6[2];
    u32 PLLFREQ0;       //PLL Frequency 0
    u32 PLLFREQ1;       //PLL Frequency 1
    u32 PLLSTATE;       //PLL Status
    u32 RES7[7];
    u32 SLPPWRCFG;      //Sleep Power Configuration
    u32 DSLPPWRCFG;     //Deep Sleep Power Configuration

    u32 DC9;            //Device Capabilities 9
    u32 RES8[3];

    u32 NVMSTAT;        //Non-Volatile Memory State

    u32 res5[4];

    u32 LDOSPCTL;       //LDO Sleep Power Control
    u32 LDOSPCAL;       //LDO Sleep Power Calibration
    u32 LDODPCTL;       //LDO Deep-Sleep Power Control
    u32 LDODPCAL;       //LDO Deep-Sleep Power Calibration
    u32 RES9[2];
    u32 SDPMST;         //Sleep / Deep-Sleep Power Mode Status
    u32 RES10[76];
    u32 PPWD;           //WatchDog Timer Peripheral Present
    u32 PPTIMER;        //16/32-Bit General-Purpose Timer Peripheral Present
    u32 PPGPIO;         //General-Purpose Input/Output Peripheral Present
    u32 PPDMA;          //Micro DMD Peripheral Present
    u32 RES11;
    u32 PPHIB;          //Hibernation Peripheral Present
    u32 PPUART;         //UART Peripheral Present
    u32 PPSSI;          //SPI Peripheral Present
    u32 PPI2C;          //I2C Peripheral Present
    u32 RES12;
    u32 PPUSB;          //USB Peripheral Present
    u32 RES13[2];
    u32 PPCAN;          //CAN Peripheral Present
    u32 PPADC;          //ADC Peripheral Present
    u32 PPACMP;         //Analog Comparator Peripheral Present
    u32 PPPWM;          //PWM Peripheral Present
    u32 PPQEI;          //Quadrature Encoder Interface Peripheral Present
    u32 RES14[4];
    u32 PPEEPROM;       //EEPROM Peripheral Present
    u32 PPWTIMER;       //32/64-Bit Wide General Purpose Timer Peripheral Present
    u32 RES15[104];
    u32 SRWD;           //WatchDog Timer SW Reset
    u32 SRTIMER;        //16/32-Bit General Purpose Timer SW Reset
    u32 SRGPIO;         //GPIO SW Reset
    u32 SRDMA;          //DMA SW Reset
    u32 RES16;
    u32 SRHIB;          //Hibernation SW Reset
    u32 SRUART;         //UART SW Reset
    u32 SRSSI;          //SPI SW Reset
    u32 SRI2C;          //I2C SW Reset
    u32 RES17;
    u32 SRUSB;          //USB SW Reset
    u32 RES18[2];
    u32 SRCAN;          //CAN SW Reset
    u32 SRADC;          //ADC SW Reset
    u32 SRACMP;         //Analog Comparator SW Reset
    u32 SRPWM;          //PWM SW Reset
    u32 SRQEI;          //Quadrature Encoder Interface SW Reset
    u32 RES19[4];
    u32 SREEPROM;       //EEPROM SW Reset
    u32 SRWTIMER;       //32/64-Bit Wide General Purpose Timer SW Reset
    u32 RES20[40];
    u32 RCGCWD;         //WatchDog Timer Run Mode Clock Gating Control
    u32 RCGCTIMER;      //16/32-BitGeneral-Purpose Timer Run Mode Clock Gating Control
    u32 RCGCGPIO;       //GPIO Run Mode Clock Gating Control
    u32 RCGCDMA;        //DMA Run Mode Clock Gating Control
    u32 RES21;
    u32 RCGCHIB;        //Hibernation  Run Mode Clock Gating Control
    u32 RCGCUART;       //UART Run Mode Clock Gating Control
    u32 RCGCSSI;        //SPI Run Mode Clock Gating Control
    u32 RCGCI2C;        //I2C Run Mode Clock Gating Control
    u32 RES22;
    u32 RCGCUSB;        //USB Run Mode Clock Gating Control
    u32 RES23[2];
    u32 RCGCCAN;        //CAN Run Mode Clock Gating Control
    u32 RCGCADC;        //ADC Run Mode Clock Gating Control
    u32 RCGCACMP;       //Analog Comparator  Run Mode Clock Gating Control
    u32 RCGCRPWM;       //PWM Run Mode Clock Gating Control
    u32 RCGCRQEI;       //Quadrature Encoder Interface  Run Mode Clock Gating Control
    u32 RES24[4];
    u32 RCGCEEPROM;     //EEPROM Run Mode Clock Gating Control
    u32 RCGCWTIMER;     //16/32-BitGeneral-Purpose Timer Run Mode Clock Gating Control
    u32 RES25[40];

    u32 SCGCWD;         //WatcDog Timer Sleep Mode Clock Gating Control
    u32 SCGCTIMER;      //16/32-BitGeneral-Purpose Timer Sleep Mode Clock Gating Control
    u32 SCGCGPIO;       //GPIO Sleep Mode Clock Gating Control
    u32 SCGCDMA;        //DMA Sleep Mode Clock Gating Control
    u32 RES26;
    u32 SCGCHIB;        //Hibernation  Sleep Mode Clock Gating Control
    u32 SCGCUART;       //UART Sleep Mode Clock Gating Control
    u32 SCGCSSI;        //SPI Sleep Mode Clock Gating Control
    u32 SCGCI2C;        //I2C Sleep Mode Clock Gating Control
    u32 RES27;
    u32 SCGCUSB;        //USB Sleep Mode Clock Gating Control
    u32 RES28[2];
    u32 SCGCCAN;        //CAN Sleep Mode Clock Gating Control
    u32 SCGCADC;        //ADC Sleep Mode Clock Gating Control
    u32 SCGCACMP;       //Analog Comparator  Sleep Mode Clock Gating Control
    u32 SCGCRPWM;       //PWM Sleep Mode Clock Gating Control
    u32 SCGCRQEI;       //Quadrature Encoder Interface  Sleep Mode Clock Gating Control
    u32 RES29[4];
    u32 SCGCEEPROM;     //EEPROM Sleep Mode Clock Gating Control
    u32 SCGCWTIMER;     //16/32-BitGeneral-Purpose Timer Sleep Mode Clock Gating Control
    u32 RES30[40];

    u32 DCGCWD;         //WatchDog Timer Deep-Sleep Mode Clock Gating Control
    u32 DCGCTIMER;      //16/32-BitGeneral-Purpose Timer Deep-Sleep Mode Clock Gating Control
    u32 DCGCGPIO;       //GPIO Deep-Sleep Mode Clock Gating Control
    u32 DCGCDMA;        //DMA Deep-Sleep Mode Clock Gating Control
    u32 RES31;
    u32 DCGCHIB;        //Hibernation  Deep-Sleep Mode Clock Gating Control
    u32 DCGCUART;       //UART Deep-Sleep Mode Clock Gating Control
    u32 DCGCSSI;        //SPI Deep-Sleep Mode Clock Gating Control
    u32 DCGCI2C;        //I2C Deep-Sleep Mode Clock Gating Control
    u32 RES32;
    u32 DCGCUSB;        //USB Deep-Sleep Mode Clock Gating Control
    u32 RES33[2];
    u32 DCGCCAN;        //CAN Deep-Sleep Mode Clock Gating Control
    u32 DCGCADC;        //ADC Deep-Sleep Mode Clock Gating Control
    u32 DCGCACMP;       //Analog Comparator  Deep-Sleep Mode Clock Gating Control
    u32 DCGCRPWM;       //PWM Deep-Sleep Mode Clock Gating Control
    u32 DCGCRQEI;       //Quadrature Encoder Interface  Deep-Sleep Mode Clock Gating Control
    u32 RES34[4];
    u32 DCGCEEPROM;     //EEPROM Deep-Sleep Mode Clock Gating Control
    u32 DCGCWTIMER;     //16/32-BitGeneral-Purpose Timer Deep-Sleep Mode Clock Gating Control
    u32 RES35[40];

    u32 PRCWD;         //WatchDog Timer Peripheral Ready  Gating Control
    u32 PRTIMER;      //16/32-BitGeneral-Purpose Timer Peripheral Ready  Gating Control
    u32 PRGPIO;       //GPIO Peripheral Ready  Gating Control
    u32 PRGCDMA;        //DMA Peripheral Ready  Gating Control
    u32 RES36;
    u32 PRHIB;        //Hibernation  Peripheral Ready  Gating Control
    u32 PRUART;       //UART Peripheral Ready  Gating Control
    u32 PRSSI;        //SPI Peripheral Ready  Gating Control
    u32 PRI2C;        //I2C Peripheral Ready  Gating Control
    u32 RES37;
    u32 PRUSB;        //USB Peripheral Ready  Gating Control
    u32 RES38[2];
    u32 PRCAN;        //CAN Peripheral Ready  Gating Control
    u32 PRADC;        //ADC Peripheral Ready  Gating Control
    u32 PRACMP;       //Analog Comparator  Peripheral Ready  Gating Control
    u32 PRPWM;       //PWM Peripheral Ready  Gating Control
    u32 PRQEI;       //Quadrature Encoder Interface  Peripheral Ready  Gating Control
    u32 RES39[4];
    u32 PREEPROM;     //EEPROM Peripheral Ready  Gating Control
    u32 PRWTIMER;     //16/32-BitGeneral-Purpose Timer Peripheral Ready  Gating Control
    u32 RES40[40];


}SYSCTL_REG;

#define SYSCTL ((volatile SYSCTL_REG*)0x400FE000)

#endif /* SYSCTL_REG_H_ */
