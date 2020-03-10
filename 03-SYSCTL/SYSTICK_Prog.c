/*
 * SYSTICK_Prog.c
 *
 *  Created on: Feb 8, 2020
 *      Author: Islam Ehab
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SYSTICK_Int.h"

 volatile u32 DELAY_X;


 void SysTick_Handler(void){

     if(DELAY_X != 0)
         {
             DELAY_X--;
         }
 }
void _delay_ms(u32 u32DelayCPY)
{

    DELAY_X = u32DelayCPY;

    while(DELAY_X !=0)
        {

        }
}

ERROR_status vidSYSTICK_Init(u32 u32LoadCPY)
{
    if(u32LoadCPY <= 0 || u32LoadCPY > 0x00FFFFFF)
        {
            return NOK;
        }
    SYSTICK_STRLOAD = u32LoadCPY;
    SYSTICK_STCURRENT = 0x00;
    SYSTICK_STCRL = 0x00000007;

}
