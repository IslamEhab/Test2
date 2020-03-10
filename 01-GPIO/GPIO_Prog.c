/*
 * GPIO_Prog.c
 *
 *  Created on: Feb 1, 2020
 *      Author: Islam Ehab
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_Reg.h"
#include "GPIO_Init.h"


void vidGPIO_SetPinDirection(u8 u8Port, u8 u8Pin, u8 u8Dir)
{
    if ((u8Port >= PORTA) && (u8Port <= PORTF_AHB))
    {
        switch (u8Port)
        {
        case PORTA:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOA -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOA -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;

        case PORTB:
            if((u8Pin<PIN7))
            {
                //PORTB Pins 0->7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;
        case PORTC:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOC -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOC -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOD -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOD -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOE -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOE -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOF -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOF -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        case PORTA_AHB:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOA_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOA_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;

        case PORTB_AHB:
            if((u8Pin<PIN7))
            {
                //PORTB Pins 0->7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOB_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOB_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;

        case PORTC_AHB:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7

                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOC_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOC_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD_AHB:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOD_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOD_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOE_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOE_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                if(u8Dir == OUTPUT)
                {
                    SET_BIT(GPIOF_AHB -> DIR, u8Pin);
                }

                else if (u8Dir == INPUT)
                {
                    CLR_BIT(GPIOF_AHB -> DIR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        }
    }
    else
    {
        //do nothing  guard to port and pin
    }


}


void vidGPIO_SetPinConfig(u8 u8Port, u8 u8Pin, u8 u8SignalMode, u8 u8alternative)
{
    if (u8Port <= PORTF_AHB)
    {
        switch (u8Port)
        {
        case PORTA:

            if((u8Pin>=PIN0) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7
                GPIOA -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOA -> AMSEL, u8Pin);
                    CLR_BIT(GPIOA -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOA -> DEN, u8Pin);
                    CLR_BIT(GPIOA -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }

                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTB:
            if((u8Pin<=PIN7))
            {
                //PORTB Pins 0->7
                GPIOB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOB-> DEN, u8Pin);
                    CLR_BIT(GPIOB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTC:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC Pins 4->7
                GPIOC -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOC -> AMSEL, u8Pin);
                    CLR_BIT(GPIOC -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOC -> DEN, u8Pin);
                    CLR_BIT(GPIOC -> AMSEL, u8Pin);
                }

                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTD:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD Pins 0->7 Except 4,5
                GPIOD -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOD -> AMSEL, u8Pin);
                    CLR_BIT(GPIOD -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOD -> DEN, u8Pin);
                    CLR_BIT(GPIOD -> AMSEL, u8Pin);
                }

                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTE:
            if((u8Pin<=PIN5))
            {
                //PORTE Pins 0->5
                GPIOE -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOE -> AMSEL, u8Pin);
                    CLR_BIT(GPIOE -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOE -> DEN, u8Pin);
                    CLR_BIT(GPIOE -> AMSEL, u8Pin);
                }

                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTF:
            if((u8Pin<=PIN4))
            {
                //PORTF Pins 0->4
                GPIOF -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOF -> AMSEL, u8Pin);
                    CLR_BIT(GPIOF -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOF -> DEN, u8Pin);
                    CLR_BIT(GPIOF -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTA_AHB:
            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7
                GPIOA_AHB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOA_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOA_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOA_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOA_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTB_AHB:
            if((u8Pin<=PIN7))
            {
                //PORTB Pins 0->7
                GPIOB_AHB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOB_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOB_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOB_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOB_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTC_AHB:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC Pins 4->7
                GPIOC_AHB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOC_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOC_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOC_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOC_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTD_AHB:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTA Pins 0->7 Except 4,5
                GPIOD_AHB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOD_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOD_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOD_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOD_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTE_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE Pins 0->5
                GPIOE_AHB -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOE_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOE_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOE_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOE_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTF_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                //PORTF Pins 0->4
                GPIOF -> LOCK = 0x4C4F434B;

                if(u8SignalMode == ANALOG)
                {
                    SET_BIT(GPIOF_AHB -> AMSEL, u8Pin);
                    CLR_BIT(GPIOF_AHB -> DEN, u8Pin);

                }

                else if (u8SignalMode == DIGITAL)
                {
                    SET_BIT(GPIOF_AHB -> DEN, u8Pin);
                    CLR_BIT(GPIOF_AHB -> AMSEL, u8Pin);
                }
                else
                {
                    //do nothing
                }
                if (u8alternative != NO)
                {
                    SET_BIT(GPIOA -> AFSEL, u8Pin);
                    GPIOA -> PCTL |= u8alternative;
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;


        }
    }

}

void vidGPIO_SetPinValue(u8 u8Port, u8 u8Pin, u8 u8Val)
{
    if ((u8Port >= PORTA) && (u8Port <= PORTF_AHB))
    {
        switch (u8Port)
        {
        case PORTA:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOA -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOA -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTB:
            if((u8Pin<=PIN7))
            {
                //PORTB Pins 0->7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;
        case PORTC:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOC -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOC -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOD -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOD -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOE -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOE -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOF -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOF -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        case PORTA_AHB:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOA_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOA_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;
        case PORTB_AHB:
            if((u8Pin<=PIN7))
            {
                //PORTB Pins 0->7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOB_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOB_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;
        case PORTC_AHB:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7

                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOC_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOC_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD_AHB:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOD_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOD_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOE_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOE_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                if(u8Val == HIGH)
                {
                    SET_BIT(GPIOF_AHB -> DATA, u8Pin);
                }

                else if (u8Val == LOW)
                {
                    CLR_BIT(GPIOF_AHB -> DATA, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        }
    }
    else
    {
        //do nothing  guard to port and pin
    }

}

void vidGPIO_SetResistorMode(u8 u8Port, u8 u8Pin, u8 u8Mode)
{
    if ((u8Port >= PORTA) && (u8Port <= PORTF_AHB))
    {

        switch (u8Port)
        {
        case PORTA:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7
                GPIOA -> LOCK = 0x4C4F434B;

                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOA -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOA -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOA -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;

        case PORTB:
            if((u8Pin<PIN7))
            {
                //PORTB Pins 0->7
                GPIOB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;
        case PORTC:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7
                GPIOC -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOC -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOC -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOC -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }


            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                GPIOD -> LOCK = 0x4C4F434B;

                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOD -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOD -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOD -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }


            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                GPIOE -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOE -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOE -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOE -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {

                GPIOF -> LOCK = 0x4C4F434B;
                GPIOF -> CR = 0x01; /* make PORTF0 configurable */
                GPIOF -> LOCK = 0; /* lock commit register */

                if(u8Mode == PULL_UP)
                {
                    //                    if (u8Pin == PIN0)
                    //                        GPIOF -> PUR = 0x01;
                    //                    else
                    SET_BIT(GPIOF -> PUR, u8Pin);
                    //                GPIOF -> PUR |= u8Pin;
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOF -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOF -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        case PORTA_AHB:

            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                //PORTA Pins 2->7
                GPIOA_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOA_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOA_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOA_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;

        case PORTB_AHB:
            if((u8Pin<PIN7))
            {
                //PORTB Pins 0->7
                GPIOB_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOB_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOB_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOB_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;

        case PORTC_AHB:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                //PORTC PINS 4 -> 7
                GPIOC_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOC_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOC_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOC_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }


            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD_AHB:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                //PORTD PINS 0/1/2/3/6/7
                GPIOD_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOD_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOD_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOD_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }


            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;
        case PORTE_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                //PORTE PINS 0 -> 5
                GPIOE_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOE_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOE_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOE_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                GPIOF_AHB -> LOCK = 0x4C4F434B;
                if(u8Mode == PULL_UP)
                {
                    SET_BIT(GPIOE_AHB -> PUR, u8Pin);
                }

                else if (u8Mode == PULL_DOWN)
                {
                    SET_BIT(GPIOE_AHB -> PDR, u8Pin);
                }
                else if(u8Mode == OPEN_DRAIN)
                {
                    SET_BIT(GPIOE_AHB -> ODR, u8Pin);
                }
                else
                {
                    //do nothing
                }
            }

            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        }
    }
    else
    {
        //do nothing  guard to port and pin
    }

}



void vidGPIO_SetInterruptMode(u8 u8Port, u8 u8Pin, u8 u8Mode)
{
    if ((u8Port >= PORTA) && (u8Port <= PORTF_AHB))
    {


        switch (u8Port)
        {
        case PORTA:
            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                GPIOA -> LOCK = 0x4C4F434B;
                GPIOA -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOA -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOA -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOA -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOA -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOA -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOA -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTA Pins
            }

            break;

        case PORTB:
            if((u8Pin<PIN7))
            {
                GPIOB -> LOCK = 0x4C4F434B;
                //PORTB Pins 0->7
                GPIOB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }
            else
            {
                //do Nothing Guard to PORTB Pins

            }
            break;

        case PORTC:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                GPIOC -> LOCK = 0x4C4F434B;
                //PORTC PINS 4 -> 7
                GPIOC -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOC -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOC -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOC -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOC -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOC -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOC -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }
            else
            {
                //do Nothing Guard to PORTC Pins

            }

            break;

        case PORTD:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                GPIOD -> LOCK = 0x4C4F434B;
                //PORTD PINS 0/1/2/3/6/7
                GPIOD -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOD -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOD -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOD -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOD -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOD -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOD -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;

        case PORTE:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                GPIOE -> LOCK = 0x4C4F434B;
                //PORTE PINS 0 -> 5
                GPIOE -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOE -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOE -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOE -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOE -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOE -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOE -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }

            break;

        case PORTF:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))
            {
                GPIOF -> LOCK = 0x4C4F434B;
                GPIOF -> CR = 0x01; /* make PORTF0 configurable */
                GPIOF -> LOCK = 0; /* lock commit register */
                //                GPIOF -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOF -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOF -> IEV, u8Pin);   //Falling Edge
                    SET_BIT(GPIOF -> ICR, u8Pin);   //Clear any prior INT
                    //                    CLR_BIT(GPIOF -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOF -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOF -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOF -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOF -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOF -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOF -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOF -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOF -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;

        case PORTA_AHB:
            if((u8Pin>=PIN2) && (u8Pin<=PIN7))
            {
                GPIOA_AHB -> LOCK = 0x4C4F434B;
                //PORTA Pins 2->7
                GPIOA_AHB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOA_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOA_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOA_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOA_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOA_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOA_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOA_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOA_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }

            else
            {
                //do Nothing Guard to PORTA Pins
            }
            break;

        case PORTB_AHB:
            if((u8Pin<PIN7))
            {
                GPIOB_AHB -> LOCK = 0x4C4F434B;
                //PORTB Pins 0->7
                GPIOB_AHB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOB_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOB_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOB_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOB_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOB_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOB_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOB_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOB_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }

            else
            {
                //do Nothing Guard to PORTB Pins

            }

            break;
        case PORTC_AHB:
            if((u8Pin>=PIN4) && (u8Pin<=PIN7))
            {
                GPIOC_AHB -> LOCK = 0x4C4F434B;
                //PORTC PINS 4 -> 7
                GPIOC_AHB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOC_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOC_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOC_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOC_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOC_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOC_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOC_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOC_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }

            else
            {
                //do Nothing Guard to PORTC Pins

            }
            break;
        case PORTD_AHB:
            if(!((u8Pin && PIN4) || (u8Pin && PIN5)))
            {
                GPIOD_AHB -> LOCK = 0x4C4F434B;
                //PORTD PINS 0/1/2/3/6/7
                GPIOD_AHB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOD_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOD_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOD_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOD_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOD_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOD_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOD_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOD_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTD Pins

            }
            break;

        case PORTE_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN5))
            {
                GPIOE_AHB -> LOCK = 0x4C4F434B;
                //PORTE PINS 0 -> 5
                GPIOE_AHB -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOE_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOE_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOE_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOE_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOE_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOE_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOE_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOE_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }


            }
            else
            {
                //do Nothing Guard to PORTE Pins

            }
            break;
        case PORTF_AHB:
            if((u8Pin>=PIN0) && (u8Pin<=PIN4))

            {

                GPIOF_AHB -> LOCK = 0x4C4F434B;
                GPIOF -> IM = 0x00000000;

                //PORTA Pins 2->7
                if(u8Mode == FALLING)
                {
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    CLR_BIT(GPIOF_AHB -> IEV, u8Pin);   //Falling Edge
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF_AHB -> IM,  u8Pin);   //Enable INT
                }

                else if (u8Mode == RISING)
                {
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF_AHB -> IBE, u8Pin);   //Falling/Rising Edge
                    SET_BIT(GPIOF_AHB -> IEV, u8Pin);   //Rising Edge
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == LOW_LEVEL)
                {
                    SET_BIT(GPIOF_AHB -> IS,  u8Pin);   //Edge Triggering
                    CLR_BIT(GPIOF_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF_AHB -> IM,  u8Pin);   //Enable INT
                }
                else if (u8Mode == HIGH_LEVEL)
                {
                    SET_BIT(GPIOF_AHB -> IS,  u8Pin);   //Edge Triggering
                    SET_BIT(GPIOF_AHB -> IEV, u8Pin);   //Low Level
                    CLR_BIT(GPIOF_AHB -> IS,  u8Pin);   //CLR IS REG
                    SET_BIT(GPIOF_AHB -> IM,  u8Pin);   //Enable INT
                }
                else
                {
                    //do nothing
                }

            }
            else
            {
                //do Nothing Guard to PORTF Pins

            }
            break;
        }
    }
}
