/*
 * UART_Init.h
 *
 *  Created on: Feb 11, 2020
 *      Author: Islam Ehab
 */

#ifndef UART_INIT_H_
#define UART_INIT_H_


#define UART0                0
#define UART1                1
#define UART2                2
#define UART3                3
#define UART4                4
#define UART5                5
#define UART6                6
#define UART7                7


#define BD9600_INT           104
#define BD9600_FR            11

#define BD38400_INT          26
#define BD38400_FR           3

#define BD57600_INT          17
#define BD57600_FR           23

#define BD115200_INT         8
#define BD115200_FR          44

void vidUART_Init(u8 u8uart);
void vidUART_SendChar(u8 u8uart,u8 u8char);
void vidUART_SendString(u8 u8uart, u8* u8str,u8 u8size);
u8 u8UART_GetChar(u8 u8uart);


#endif /* UART_INIT_H_ */
