/*
 * NVIC_Prog.c
 *
 *  Created on: Feb 2, 2020
 *      Author: Islam Ehab
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "NVIC_Reg.h"
#include "NVIC_Init.h"


//void vidNVIC_SetPriority(u8 u8Idx, u8 u8Priority)
//{
//    NVIC_IPR[u8Idx] |= u8Priority;
//}

void vidNVIC_Enable(u8 u8Idx)
{
    if (u8Idx <= 31)
    {
        NVIC_EN[0] |= (1 << u8Idx);

    }
    else if(u8Idx <= 63)
    {
        u8Idx -= 32;
        NVIC_EN[1] |= (1 << u8Idx);
    }
}
void vidNVIC_Disable(u8 u8Idx)
{
    if (u8Idx <= 31)
    {
        NVIC_DIS[0] = (1 << u8Idx);
    }
    else if(u8Idx <= 63)
    {
        u8Idx -= 32;
        NVIC_DIS[1] = (1 << u8Idx);
    }
}

void vidNVIC_SetPending(u8 u8Idx)
{
    if(u8Idx <= 31)
    {
        NVIC_PEND[0] = (1 << u8Idx);
    }
    else if(u8Idx <= 63)
    {
        u8Idx -= 32;
        NVIC_PEND[1] = (1 << u8Idx);
    }
    else if (u8Idx <= 95)
    {
        u8Idx -=64;
        NVIC_PEND[2] = (1 << u8Idx);

    }
}

void vidNVIC_ClearPending(u8 u8Idx)
{
    if(u8Idx <= 31)
    {
        NVIC_UNPEND[0] = (1 << u8Idx);
    }
    else if(u8Idx <= 63)
    {
        u8Idx -= 32;
        NVIC_UNPEND[1] = (1 << u8Idx);
    }
    else if (u8Idx <= 95)
    {
        u8Idx -=64;
        NVIC_UNPEND[2] = (1<<u8Idx);
    }
}

u8 u8MVIC_GetActiveKey(u8 u8Idx)
{
    u8 u8Val =0;
    if(u8Idx <= 31)
    {
        u8Val = GET_BIT(NVIC_ACTIVE[0], u8Idx);
    }
    else if(u8Idx <= 63)
    {
        u8Val = GET_BIT(NVIC_ACTIVE[1], u8Idx);
    }
    else
    {
        u8Val = 0xff;
    }
    return u8Val;
}
