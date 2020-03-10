/*
 * GPIO_Reg.h
 *
 *  Created on: Jan 31, 2020
 *      Author: Islam Ehab
 */

#ifndef GPIO_REG_H_
#define GPIO_REG_H_




//#define GPIOA_DATA      (*((volatile u32*)0x400043FC))
//#define GPIOA_DIR       (*((volatile u32*)0x40004400))
//#define GPIOA_IS        (*((volatile u32*)0x40004404))
//#define GPIOA_IBE       (*((volatile u32*)0x40004408))
//#define GPIOA_IEV       (*((volatile u32*)0x4000440C))
//#define GPIOA_IM        (*((volatile u32*)0x40004410))
//#define GPIOA_RIS       (*((volatile u32*)0x40004414))
//#define GPIOA_MIS       (*((volatile u32*)0x40004418))
//#define GPIOA_ICR       (*((volatile u32*)0x4000441C))
//#define GPIOA_AFSEL     (*((volatile u32*)0x40004420))
//#define GPIOA_DR2R      (*((volatile u32*)0x40004500))
//#define GPIOA_DR4R      (*((volatile u32*)0x40004504))
//#define GPIOA_DR8R      (*((volatile u32*)0x40004508))
//#define GPIOA_ODR       (*((volatile u32*)0x4000450C))
//#define GPIOA_PUR       (*((volatile u32*)0x40004510))
//#define GPIOA_PDR       (*((volatile u32*)0x40004514))
//#define GPIOA_SLR       (*((volatile u32*)0x40004518))
//#define GPIOA_DEN       (*((volatile u32*)0x4000451C))
//#define GPIOA_LOCK      (*((volatile u32*)0x40004520))
//#define GPIOA_CR        (*((volatile u32*)0x40004524))
//#define GPIOA_AMSEL     (*((volatile u32*)0x40004528))
//#define GPIOA_PCTL      (*((volatile u32*)0x4000452C))
//#define GPIOA_ADCCTL    (*((volatile u32*)0x40004530))
//#define GPIOA_DMACT     (*((volatile u32*)0x40004534))
//#define GPIOA_PeriphID4 (*((volatile u32*)0x40004FD0))
//#define GPIOA_PeriphID5 (*((volatile u32*)0x40004FD4))
//#define GPIOA_PeriphID6 (*((volatile u32*)0x40004FD8))
//#define GPIOA_PeriphID7 (*((volatile u32*)0x40004FDC))
//#define GPIOA_PeriphID0 (*((volatile u32*)0x40004FE0))
//#define GPIOA_PeriphID1 (*((volatile u32*)0x40004FE4))
//#define GPIOA_PeriphID2 (*((volatile u32*)0x40004FE8))
//#define GPIOA_PeriphID3 (*((volatile u32*)0x40004FEC))
//#define GPIOA_PCellID0  (*((volatile u32*)0x40004FF0))
//#define GPIOA_PCellID1  (*((volatile u32*)0x40004FF4))
//#define GPIOA_PCellID2  (*((volatile u32*)0x40004FF8))
//#define GPIOA_PCellID3  (*((volatile u32*)0x40004FFC))
//
//
//#define GPIOB_DATA      (*((volatile u32*)0x400053FC))
//#define GPIOB_DIR       (*((volatile u32*)0x40005400))
//#define GPIOB_IS        (*((volatile u32*)0x40005404))
//#define GPIOB_IBE       (*((volatile u32*)0x40005408))
//#define GPIOB_IEV       (*((volatile u32*)0x4000540C))
//#define GPIOB_IM        (*((volatile u32*)0x40005410))
//#define GPIOB_RIS       (*((volatile u32*)0x40005414))
//#define GPIOB_MIS       (*((volatile u32*)0x40005418))
//#define GPIOB_ICR       (*((volatile u32*)0x4000541C))
//#define GPIOB_AFSEL     (*((volatile u32*)0x40005420))
//#define GPIOB_DR2R      (*((volatile u32*)0x40005500))
//#define GPIOB_DR4R      (*((volatile u32*)0x40005504))
//#define GPIOB_DR8R      (*((volatile u32*)0x40005508))
//#define GPIOB_ODR       (*((volatile u32*)0x4000550C))
//#define GPIOB_PUR       (*((volatile u32*)0x40005510))
//#define GPIOB_PDR       (*((volatile u32*)0x40005514))
//#define GPIOB_SLR       (*((volatile u32*)0x40005518))
//#define GPIOB_DEN       (*((volatile u32*)0x4000551C))
//#define GPIOB_LOCK      (*((volatile u32*)0x40005520))
//#define GPIOB_CR        (*((volatile u32*)0x40005524))
//#define GPIOB_AMSEL     (*((volatile u32*)0x40005528))
//#define GPIOB_PCTL      (*((volatile u32*)0x4000552C))
//#define GPIOB_ADCCTL    (*((volatile u32*)0x40005530))
//#define GPIOB_DMACT     (*((volatile u32*)0x40005534))
//#define GPIOB_PeriphID4 (*((volatile u32*)0x40005FD0))
//#define GPIOB_PeriphID5 (*((volatile u32*)0x40005FD4))
//#define GPIOB_PeriphID6 (*((volatile u32*)0x40005FD8))
//#define GPIOB_PeriphID7 (*((volatile u32*)0x40005FDC))
//#define GPIOB_PeriphID0 (*((volatile u32*)0x40005FE0))
//#define GPIOB_PeriphID1 (*((volatile u32*)0x40005FE4))
//#define GPIOB_PeriphID2 (*((volatile u32*)0x40005FE8))
//#define GPIOB_PeriphID3 (*((volatile u32*)0x40005FEC))
//#define GPIOB_PCellID0  (*((volatile u32*)0x40005FF0))
//#define GPIOB_PCellID1  (*((volatile u32*)0x40005FF4))
//#define GPIOB_PCellID2  (*((volatile u32*)0x40005FF8))
//#define GPIOB_PCellID3  (*((volatile u32*)0x40005FFC))
//
//
//#define GPIOC_DATA      (*((volatile u32*)0x400063FC))
//#define GPIOC_DIR       (*((volatile u32*)0x40006400))
//#define GPIOC_IS        (*((volatile u32*)0x40006404))
//#define GPIOC_IBE       (*((volatile u32*)0x40006408))
//#define GPIOC_IEV       (*((volatile u32*)0x4000640C))
//#define GPIOC_IM        (*((volatile u32*)0x40006410))
//#define GPIOC_RIS       (*((volatile u32*)0x40006414))
//#define GPIOC_MIS       (*((volatile u32*)0x40006418))
//#define GPIOC_ICR       (*((volatile u32*)0x4000641C))
//#define GPIOC_AFSEL     (*((volatile u32*)0x40006420))
//#define GPIOC_DR2R      (*((volatile u32*)0x40006500))
//#define GPIOC_DR4R      (*((volatile u32*)0x40006504))
//#define GPIOC_DR8R      (*((volatile u32*)0x40006508))
//#define GPIOC_ODR       (*((volatile u32*)0x4000650C))
//#define GPIOC_PUR       (*((volatile u32*)0x40006510))
//#define GPIOC_PDR       (*((volatile u32*)0x40006514))
//#define GPIOC_SLR       (*((volatile u32*)0x40006518))
//#define GPIOC_DEN       (*((volatile u32*)0x4000651C))
//#define GPIOC_LOCK      (*((volatile u32*)0x40006520))
//#define GPIOC_CR        (*((volatile u32*)0x40006524))
//#define GPIOC_AMSEL     (*((volatile u32*)0x40006528))
//#define GPIOC_PCTL      (*((volatile u32*)0x4000652C))
//#define GPIOC_ADCCTL    (*((volatile u32*)0x40006530))
//#define GPIOC_DMACT     (*((volatile u32*)0x40006534))
//#define GPIOC_PeriphID4 (*((volatile u32*)0x40006FD0))
//#define GPIOC_PeriphID5 (*((volatile u32*)0x40006FD4))
//#define GPIOC_PeriphID6 (*((volatile u32*)0x40006FD8))
//#define GPIOC_PeriphID7 (*((volatile u32*)0x40006FDC))
//#define GPIOC_PeriphID0 (*((volatile u32*)0x40006FE0))
//#define GPIOC_PeriphID1 (*((volatile u32*)0x40006FE4))
//#define GPIOC_PeriphID2 (*((volatile u32*)0x40006FE8))
//#define GPIOC_PeriphID3 (*((volatile u32*)0x40006FEC))
//#define GPIOC_PCellID0  (*((volatile u32*)0x40006FF0))
//#define GPIOC_PCellID1  (*((volatile u32*)0x40006FF4))
//#define GPIOC_PCellID2  (*((volatile u32*)0x40006FF8))
//#define GPIOC_PCellID3  (*((volatile u32*)0x40006FFC))
//
//#define GPIOD_DATA      (*((volatile u32*)0x400073FC))
//#define GPIOD_DIR       (*((volatile u32*)0x40007400))
//#define GPIOD_IS        (*((volatile u32*)0x40007404))
//#define GPIOD_IBE       (*((volatile u32*)0x40007408))
//#define GPIOD_IEV       (*((volatile u32*)0x4000740C))
//#define GPIOD_IM        (*((volatile u32*)0x40007410))
//#define GPIOD_RIS       (*((volatile u32*)0x40007414))
//#define GPIOD_MIS       (*((volatile u32*)0x40007418))
//#define GPIOD_ICR       (*((volatile u32*)0x4000741C))
//#define GPIOD_AFSEL     (*((volatile u32*)0x40007420))
//#define GPIOD_DR2R      (*((volatile u32*)0x40007500))
//#define GPIOD_DR4R      (*((volatile u32*)0x40007504))
//#define GPIOD_DR8R      (*((volatile u32*)0x40007508))
//#define GPIOD_ODR       (*((volatile u32*)0x4000750C))
//#define GPIOD_PUR       (*((volatile u32*)0x40007510))
//#define GPIOD_PDR       (*((volatile u32*)0x40007514))
//#define GPIOD_SLR       (*((volatile u32*)0x40007518))
//#define GPIOD_DEN       (*((volatile u32*)0x4000751C))
//#define GPIOD_LOCK      (*((volatile u32*)0x40007520))
//#define GPIOD_CR        (*((volatile u32*)0x40007524))
//#define GPIOD_AMSEL     (*((volatile u32*)0x40007528))
//#define GPIOD_PCTL      (*((volatile u32*)0x4000752C))
//#define GPIOD_ADCCTL    (*((volatile u32*)0x40007530))
//#define GPIOD_DMACT     (*((volatile u32*)0x40007534))
//#define GPIOD_PeriphID4 (*((volatile u32*)0x40007FD0))
//#define GPIOD_PeriphID5 (*((volatile u32*)0x40007FD4))
//#define GPIOD_PeriphID6 (*((volatile u32*)0x40007FD8))
//#define GPIOD_PeriphID7 (*((volatile u32*)0x40007FDC))
//#define GPIOD_PeriphID0 (*((volatile u32*)0x40007FE0))
//#define GPIOD_PeriphID1 (*((volatile u32*)0x40007FE4))
//#define GPIOD_PeriphID2 (*((volatile u32*)0x40007FE8))
//#define GPIOD_PeriphID3 (*((volatile u32*)0x40007FEC))
//#define GPIOD_PCellID0  (*((volatile u32*)0x40007FF0))
//#define GPIOD_PCellID1  (*((volatile u32*)0x40007FF4))
//#define GPIOD_PCellID2  (*((volatile u32*)0x40007FF8))
//#define GPIOD_PCellID3  (*((volatile u32*)0x40007FFC))
//
//#define GPIOE_DATA      (*((volatile u32*)0x400233FC))
//#define GPIOE_DIR       (*((volatile u32*)0x40024400))
//#define GPIOE_IS        (*((volatile u32*)0x40024404))
//#define GPIOE_IBE       (*((volatile u32*)0x40024408))
//#define GPIOE_IEV       (*((volatile u32*)0x4002440C))
//#define GPIOE_IM        (*((volatile u32*)0x40024410))
//#define GPIOE_RIS       (*((volatile u32*)0x40024414))
//#define GPIOE_MIS       (*((volatile u32*)0x40024418))
//#define GPIOE_ICR       (*((volatile u32*)0x4002441C))
//#define GPIOE_AFSEL     (*((volatile u32*)0x40024420))
//#define GPIOE_DR2R      (*((volatile u32*)0x40024500))
//#define GPIOE_DR4R      (*((volatile u32*)0x40024504))
//#define GPIOE_DR8R      (*((volatile u32*)0x40024508))
//#define GPIOE_ODR       (*((volatile u32*)0x4002450C))
//#define GPIOE_PUR       (*((volatile u32*)0x40024510))
//#define GPIOE_PDR       (*((volatile u32*)0x40024514))
//#define GPIOE_SLR       (*((volatile u32*)0x40024518))
//#define GPIOE_DEN       (*((volatile u32*)0x4002451C))
//#define GPIOE_LOCK      (*((volatile u32*)0x40024520))
//#define GPIOE_CR        (*((volatile u32*)0x40024524))
//#define GPIOE_AMSEL     (*((volatile u32*)0x40024528))
//#define GPIOE_PCTL      (*((volatile u32*)0x4002452C))
//#define GPIOE_ADCCTL    (*((volatile u32*)0x40024530))
//#define GPIOE_DMACT     (*((volatile u32*)0x40024534))
//#define GPIOE_PeriphID4 (*((volatile u32*)0x40024FD0))
//#define GPIOE_PeriphID5 (*((volatile u32*)0x40024FD4))
//#define GPIOE_PeriphID6 (*((volatile u32*)0x40024FD8))
//#define GPIOE_PeriphID7 (*((volatile u32*)0x40024FDC))
//#define GPIOE_PeriphID0 (*((volatile u32*)0x40024FE0))
//#define GPIOE_PeriphID1 (*((volatile u32*)0x40024FE4))
//#define GPIOE_PeriphID2 (*((volatile u32*)0x40024FE8))
//#define GPIOE_PeriphID3 (*((volatile u32*)0x40024FEC))
//#define GPIOE_PCellID0  (*((volatile u32*)0x40024FF0))
//#define GPIOE_PCellID1  (*((volatile u32*)0x40024FF4))
//#define GPIOE_PCellID2  (*((volatile u32*)0x40024FF8))
//#define GPIOE_PCellID3  (*((volatile u32*)0x40024FFC))
//
//#define GPIOF_DATA      (*((volatile u32*)0x400253FC))
//#define GPIOF_DIR       (*((volatile u32*)0x40025400))
//#define GPIOF_IS        (*((volatile u32*)0x40025404))
//#define GPIOF_IBE       (*((volatile u32*)0x40025408))
//#define GPIOF_IEV       (*((volatile u32*)0x4002540C))
//#define GPIOF_IM        (*((volatile u32*)0x40025410))
//#define GPIOF_RIS       (*((volatile u32*)0x40025414))
//#define GPIOF_MIS       (*((volatile u32*)0x40025418))
//#define GPIOF_ICR       (*((volatile u32*)0x4002541C))
//#define GPIOF_AFSEL     (*((volatile u32*)0x40025420))
//#define GPIOF_DR2R      (*((volatile u32*)0x40025500))
//#define GPIOF_DR4R      (*((volatile u32*)0x40025504))
//#define GPIOF_DR8R      (*((volatile u32*)0x40025508))
//#define GPIOF_ODR       (*((volatile u32*)0x4002550C))
//#define GPIOF_PUR       (*((volatile u32*)0x40025510))
//#define GPIOF_PDR       (*((volatile u32*)0x40025514))
//#define GPIOF_SLR       (*((volatile u32*)0x40025518))
//#define GPIOF_DEN       (*((volatile u32*)0x4002551C))
//#define GPIOF_LOCK      (*((volatile u32*)0x40025520))
//#define GPIOF_CR        (*((volatile u32*)0x40025524))
//#define GPIOF_AMSEL     (*((volatile u32*)0x40025528))
//#define GPIOF_PCTL      (*((volatile u32*)0x4002552C))
//#define GPIOF_ADCCTL    (*((volatile u32*)0x40025530))
//#define GPIOF_DMACT     (*((volatile u32*)0x40025534))
//#define GPIOF_PeriphID4 (*((volatile u32*)0x40025FD0))
//#define GPIOF_PeriphID5 (*((volatile u32*)0x40025FD4))
//#define GPIOF_PeriphID6 (*((volatile u32*)0x40025FD8))
//#define GPIOF_PeriphID7 (*((volatile u32*)0x40025FDC))
//#define GPIOF_PeriphID0 (*((volatile u32*)0x40025FE0))
//#define GPIOF_PeriphID1 (*((volatile u32*)0x40025FE4))
//#define GPIOF_PeriphID2 (*((volatile u32*)0x40025FE8))
//#define GPIOF_PeriphID3 (*((volatile u32*)0x40025FEC))
//#define GPIOF_PCellID0  (*((volatile u32*)0x40025FF0))
//#define GPIOF_PCellID1  (*((volatile u32*)0x40025FF4))
//#define GPIOF_PCellID2  (*((volatile u32*)0x40025FF8))
//#define GPIOF_PCellID3  (*((volatile u32*)0x40025FFC))

typedef struct
{
    u32 RES[255];
    u32 DATA;           //GPIO Data
    u32 DIR;            //GPIO Direction
    u32 IS;             //GPIO Interrupt Sense
    u32 IBE;            //GPIO Interrupt Both Edges
    u32 IEV;            //GPIO Interrupt Event
    u32 IM;             //GPIO Interrupt Mask
    u32 RIS;            //GPIO Raw Interrupt Status
    u32 MIS;            //GPIO Masked Interrupt Status
    u32 ICR;            //GPIO Interrupt Clear
    u32 AFSEL;          //GPIO Alternate Function Select
    u32 RES1[55];
    u32 DR2R;           //GPIO 2-mA Drive Select
    u32 DR4R;           //GPIO 4-mA Drive Select
    u32 DR8R;           //GPIO 8-mA Drive Select
    u32 ODR;            //GPIO Open Drain Select
    u32 PUR;            //GPIO Pull Up Select
    u32 PDR;            //GPIO Pull Down Select
    u32 SLR;            //GPIO Slew Rate Control Select
    u32 DEN;            //GPIO Digital Enable
    u32 LOCK;           //GPIO Lock
    u32 CR;             //GPIO Commit
    u32 AMSEL;          //GPIO Analog Mode Select
    u32 PCTL;           //GPIO Port Control
    u32 ADCCTL;         //GPIO ADC Control
    u32 DMACTL;         //GPIO DMA Control
//    u32 PeriphID4;
//    u32 PeriphID5;
//    u32 PeriphID6;
//    u32 PeriphID7;
//    u32 PeriphID0;
//    u32 PeriphID1;
//    u32 PeriphID2;
//    u32 PeriphID3;
//    u32 PCellID0;
//    u32 PCellID1;
//    u32 PCellID2;
//    u32 PCellID3;

}GPIO;

#define GPIOA       ((volatile GPIO*) 0x40004000)
#define GPIOB       ((volatile GPIO*) 0x40005000)
#define GPIOC       ((volatile GPIO*) 0x40006000)
#define GPIOD       ((volatile GPIO*) 0x40007000)
#define GPIOE       ((volatile GPIO*) 0x40024000)
#define GPIOF       ((volatile GPIO*) 0x40025000)

#define GPIOA_AHB   ((volatile GPIO*) 0x40058000)
#define GPIOB_AHB   ((volatile GPIO*) 0x40059000)
#define GPIOC_AHB   ((volatile GPIO*) 0x4005A000)
#define GPIOD_AHB   ((volatile GPIO*) 0x4005B000)
#define GPIOE_AHB   ((volatile GPIO*) 0x4005C000)
#define GPIOF_AHB   ((volatile GPIO*) 0x4005D000)


#endif /* GPIO_REG_H_ */
