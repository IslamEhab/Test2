/*
 * NVIC_Reg.h
 *
 *  Created on: Feb 2, 2020
 *      Author: Islam Ehab
 */

#ifndef NVIC_REG_H_
#define NVIC_REG_H_

//#define NVIC_ICTR     ((volatile u32*)0xE000E004)           //INT Controller Type Register (RO)
//#define NVIC_ISER     ((volatile u32*)0xE000E100)           //INT Set-Enable Register    ( ISER[0]    -> ISER[7]     )
//#define NVIC_ICER     ((volatile u32*)0xE000E180)           //INT Clear-Enable Register  ( ICER[0]    -> ICER[7]     )
//#define NVIC_ISPR     ((volatile u32*)0xE000E200)           //INT Set-Pending Register   ( ISPR[0]    -> ISPR[7]     )
//#define NVIC_ICPR     ((volatile u32*)0xE000E280)           //INT Clear-Pending Register ( ICPR[0]    -> ICPR[7]     )
//#define NVIC_IABR     ((volatile u32*)0xE000E300)           //INT Active Bit Register    ( IABR[0]    -> IABR[7]     )
//#define NVIC_IPR      ((volatile u32*)0xE000E480)           //INT Priority Register      ( IPR [0]    -> IPR [7]     )

#define NVIC_EN         ((volatile u32*)0xE000E100)           //INT Set-Enable Register    ( EN[0]      -> EN[4]       )
#define NVIC_DIS        ((volatile u32*)0xE000E180)           //INT Clear-Enable Register  ( DIS[0]     -> DIS[4]      )
#define NVIC_PEND       ((volatile u32*)0xE000E200)           //INT Set Pending Register   ( PEND[0]    -> PEND[4]     )
#define NVIC_UNPEND     ((volatile u32*)0xE000E280)           //INT Clear Pending Register ( UNPEND[0]  -> UNPEND[4]   )
#define NVIC_ACTIVE     ((volatile u32*)0xE000E300)           //INT Active Bit Register    ( ACTIVE[0]  -> ACTIVE[4]   )
#define NVIC_PRI        ((volatile u32*)0xE000E400)           //INT Priority Register      ( PRI[0]     -> PRI[34]     )
#define NVIC_SWTRIG     ((volatile u32*)0xE000EF00)           //INT SW Trigger Register    ( SWTRIG                    )




#define APINT        *((volatile u32*)0xE000ED0C)           //Application INT and Reset Controller


#endif /* NVIC_REG_H_ */
