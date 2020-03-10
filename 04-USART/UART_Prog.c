/*
 * UART_Prog.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Islam Ehab
 */


#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "UART_REG.h"
#include "UART_Init.h"



/*********************************************************
 * BaudRate Calculations:                                *
 *                                                       *
 * BuadRate = SysClk / (16*CLK Div)                      *
 * Integer Value Saved at UARTIBRD                       *
 * [(Fraction Value * 64) + 0.5] Saved at UARTFBRD       *
 *                                                       *
 * Ex:  BaudRate 9600, SysClk = 16Mhz                    *
 *      BD = 16M/(16*9600) = 104.1666666                 *
 *      UARTIBRD = 104                                   *
 *      UARTFBRD = (0.166666 * 64) + 0.5 = 11            *
 ********************************************************/
void vidUART_Init(u8 u8uart)
{
    if((u8uart <= UART7))
    {
        switch(u8uart)
        {
        case UART0:
            UART_0 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_0 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_0 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_0 -> UARTCC    = 0x00;                 //Use System Clock
            UART_0 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_0 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_0 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART1:
            UART_1 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_1 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_1 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_1 -> UARTCC    = 0x00;                 //Use System Clock
            UART_1 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_1 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_1 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART2:
            UART_2 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_2 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_2 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_2 -> UARTCC    = 0x00;                 //Use System Clock
            UART_2 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_2 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_2 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART3:
            UART_3 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_3 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_3 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_3 -> UARTCC    = 0x00;                 //Use System Clock
            UART_3 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_3 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_3 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART4:
            UART_4 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_4 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_4 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_4 -> UARTCC    = 0x00;                 //Use System Clock
            UART_4 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_4 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_4 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART5:
            UART_5 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_5 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_5 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_5 -> UARTCC    = 0x00;                 //Use System Clock
            UART_5 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_5 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_5 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART6:
            UART_6 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_6 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_6 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_6 -> UARTCC    = 0x00;                 //Use System Clock
            UART_6 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_6 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_6 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        case UART7:
            UART_7 -> UARTCTL   = 0x00;                 //Disable UART0
            UART_7 -> UARTIBRD  = BD9600_INT;           //BaudRate Integer Value
            UART_7 -> UARTFBRD  = BD9600_FR;            //BaudRate Fraction Value
            UART_7 -> UARTCC    = 0x00;                 //Use System Clock
            UART_7 -> UARTLCRH  = 0x60;                 //8-bit, No parity, 1 Stop Bit. no FIFO
            UART_7 -> UARTIM    = 0x10;                 //RX INT Enable
            UART_7 -> UARTCTL   = 0x301;                //Enable UART, RXE & TXE
            break;

        default:

            break;
        }

    }
}

void vidUART_SendChar(u8 u8uart,u8 u8char)
{
    if(u8uart <= UART7)
    {
        switch(u8uart)
        {
        case UART0:
            while((UART_0 -> UARTFR & 0x20) !=0);       //wait Untill Tx Buffer empty
            UART_0 -> UARTDR = u8char;
            break;

        case UART1:
            while((UART_1 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_1 -> UARTDR = u8char;
            break;

        case UART2:
            while((UART_2 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_2 -> UARTDR = u8char;
            break;

        case UART3:
            while((UART_3 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_3 -> UARTDR = u8char;
            break;

        case UART4:
            while((UART_4 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_4 -> UARTDR = u8char;
            break;

        case UART5:
            while((UART_5 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_5 -> UARTDR = u8char;
            break;

        case UART6:
            while((UART_6 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_6 -> UARTDR = u8char;
            break;

        case UART7:
            while((UART_7 -> UARTFR & 0x20) !=1);       //wait Untill Tx Buffer empty
            UART_7 -> UARTDR = u8char;
            break;

        default:

            break;

        }

    }

}

void vidUART_SendString(u8 u8uart, u8* u8str,u8 u8size)
{
    u8 i =0;
    if(0 != u8str)
    {
        for(i=0; i<u8size ;i++)
        {
            vidUART_SendChar(u8uart, u8str[i]);
        }
    }
}

u8 u8UART_GetChar(u8 u8uart)
{
    u8 u8char = 0;
    if(u8uart <= UART7)
    {
        switch(u8uart)
        {
        case UART0:
            while((UART_0 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_0 -> UARTDR;
            break;

        case UART1:
            while((UART_1 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_1 -> UARTDR;
            break;

        case UART2:
            while((UART_2 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_2 -> UARTDR;
            break;

        case UART3:
            while((UART_3 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_3 -> UARTDR;
            break;

        case UART4:
            while((UART_4 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_4 -> UARTDR;
            break;

        case UART5:
            while((UART_5 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_5 -> UARTDR;
            break;

        case UART6:
            while((UART_6 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_6 -> UARTDR;
            break;

        case UART7:
            while((UART_7 -> UARTFR & 0x10) !=0);       //wait Untill Tx Buffer empty
            u8char = UART_7 -> UARTDR;
            break;
        }
    }
    return u8char;
}



