/*
 * UART_Reg.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Islam Ehab
 */

#ifndef UART_REG_H_
#define UART_REG_H_




typedef struct{

    u32 UARTDR;                 //UART DATA                             0x000
    union {
        u32  ECR_UART_ALT;                    /*!< UART Receive Status/Error Clear                                       */
        u32  RSR;                             /*!< UART Receive Status/Error Clear                                       */
    };
    u32 RES0[4];                //
    u32 UARTFR;                 //UART Flag                             0x018
    u32 RES1;
    u32 UARTILPR;               //UART IrDA Low-Power Register          0x020
    u32 UARTIBRD;               //UART Integer Baud-Rate Divisor        0x024
    u32 UARTFBRD;               //UART Fractional Baud-Rate Divisor     0x028
    u32 UARTLCRH;               //UART Line Control                     0x02C
    u32 UARTCTL;                //UART Control                          0x030
    u32 UARTIFLS;               //UART Interrupt FIFO Level Select      0x034
    u32 UARTIM;                 //UART Interrupt Mask                   0x038
    u32 UARTRIS;                //UART Raw Interrupt Status             0x03C
    u32 UARTMIS;                //UART Masked Interrupt Status          0x040
    u32 UARTICR;                //UART Interrupt Clear                  0x044
    u32 UARTDMACTL;             //UART DMA Control                      0x048
    u32 RES3[22];               //
    u32 UART9BITADDR;           //UART 9-Bit Self Address               0x0A4
    u32 UART9BITMASK;           //UART 9-Bit Self Address Mask          0x0A8
    u32 RES4[965];             //
    u32 UARTPP;                 //UART Peripheral Properties            0xFC0
    u32 RES5;                   //
    u32 UARTCC;                 //UART Clock Configuration              0xFC8
}UART;

#define UART_0   ((volatile UART*) 0x4000C000)
#define UART_1   ((volatile UART*) 0x4000D000)
#define UART_2   ((volatile UART*) 0x4000E000)
#define UART_3   ((volatile UART*) 0x4000F000)
#define UART_4   ((volatile UART*) 0x40010000)
#define UART_5   ((volatile UART*) 0x40011000)
#define UART_6   ((volatile UART*) 0x40012000)
#define UART_7   ((volatile UART*) 0x40013000)
#endif /* UART_REG_H_ */
