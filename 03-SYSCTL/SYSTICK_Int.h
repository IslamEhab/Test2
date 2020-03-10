/*
 * SYSTICK_Int.h
 *
 *  Created on: Feb 8, 2020
 *      Author: Islam Ehab
 */

#ifndef SYSTICK_INT_H_
#define SYSTICK_INT_H_

#define SYSTICK_STCRL         *((volatile u32*)0xE000E010)      //SysTick Control and Status Register
#define SYSTICK_STRLOAD       *((volatile u32*)0xE000E014)      //SysTick Reload Value Register
#define SYSTICK_STCURRENT     *((volatile u32*)0xE000E018)      //SysTick Current Value Register

ERROR_status vidSYSTICK_Init(u32 u32LoadCPY);
void _delay_ms(u32 u32DelayCPY);


#endif /* SYSTICK_INT_H_ */
