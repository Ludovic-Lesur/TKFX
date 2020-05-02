/*
 * rcc.h
 *
 *  Created on: 18 apr. 2020
 *      Author: Ludo
 */

#ifndef RCC_H
#define RCC_H

/*** RCC functions ***/

void RCC_Init(void);
void RCC_EnableGpio(void);
void RCC_DisableGpio(void);
unsigned int RCC_GetSysclkKhz(void);
unsigned char RCC_SwitchToMsi(void);
unsigned char RCC_SwitchToHsi(void);
unsigned char RCC_SwitchToHse(void);
unsigned char RCC_EnableLsi(void);
unsigned char RCC_EnableLse(void);

#endif /* RCC_H */
