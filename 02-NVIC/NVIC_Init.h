/*
 * NVIC_Init.h
 *
 *  Created on: Feb 2, 2020
 *      Author: Islam Ehab
 */

#ifndef NVIC_INIT_H_
#define NVIC_INIT_H_


//#define GPIOA       0
//#define GPIOB       1
//#define GPIOC       2
//#define GPIOD       3
//#define GPIOE       4
//#define UART0       5
//#define
//#define GPIOA

enum Interrupts{
    GPIO_A,
    GPIO_B,
    GPIO_C,
    GPIO_D,
    GPIO_E,
    USART_0,
    USART_1,
    SSI_0,
    I2C_0,
    PWM0_FAULT,
    PWM0_GENERATOR0,
    PWM0_GENERATOR1,
    PWM0_GENERATOR2,
    QEI0,
    ADC0_SEQUENCE0,
    ADC0_SEQUENCE1,
    ADC0_SEQUENCE2,
    ADC0_SEQUENCE3,
    WATCHDOG0_1,
    TIMER0A,
    TIMER0B,
    TIMER1A,
    TIMER1B,
    TIMER2A,
    TIMER2B,
    ANALOG_COMPARATOR0,
    ANALOG_COMPARATOR1,
    RES1,
    SYSTEM_CONTROL,
    FLASH_EEPROM_CONTROL,
    GPIO_F,
    RES2 =32,
    USART2,
    SSI1,
    TIMER3A,
    TIMER3B,
    I2C1,
    QEI1,
    CAN0,
    CAN1,
    RES3 = 42,
    HIBERNATION_MODULE,
    USB,
    PWM_GENERATOR3,
    uDMA_SOFTWARE,
    uDMA_ERROR,
    ADC1_SEQUENCE0,
    ADC1_SEQUENCE1,
    ADC1_SEQUENCE2,
    ADC1_SEQUENCE3,
    RES4 = 56,
    SSI2,
    SSI3,
    USART3,
    USART4,
    USART5,
    USART6,
    USART7,
    RES5 = 67,
    I2C2,
    I2C3,
    TIMER4A,
    TIMER4B,
    RES6 = 91,
    TIMER5A,
    TIMER5B,
    TIMER0A_32_64BIT,
    TIMER0B_32_64BIT,
    TIMER1A_32_64BIT,
    TIMER1B_32_64BIT,
    TIMER2A_32_64BIT,
    TIMER2B_32_64BIT,
    TIMER3A_32_64BIT,
    TIMER3B_32_64BIT,
    TIMER4A_32_64BIT,
    TIMER4B_32_64BIT,
    TIMER5A_32_64BIT,
    TIMER5B_32_64BIT,
    SYSTEM_EXCEPTION,
    RES7 = 133,
    PWM1_GENERATOR0,
    PWM1_GENERATOR1,
    PWM1_GENERATOR2,
    PWM1_GENERATOR3,
    PWM1_FAULT
};


void vidNVIC_SetPriority(u8 u8Idx, u8 u8Priority);
void vidNVIC_Enable(u8 u8Idx);
void vidNVIC_Disable(u8 u8Idx);
void vidNVIC_SetPending(u8 u8Idx);
void vidNVIC_ClearPending(u8 u8Idx);
u8 u8MVIC_GetActiveKey(u8 u8Idx);



#endif /* NVIC_INIT_H_ */
