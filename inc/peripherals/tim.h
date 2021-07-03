/*
 * tim.h
 *
 *  Created on: 3 july 2021
 *      Author: Ludo
 */

#ifndef TIM_H
#define TIM_H

/*** TIM functions ***/

void TIM21_Init(void);
void TIM21_GetLsiFrequency(unsigned int* lsi_frequency_hz);
void TIM21_Disable(void);

#endif /* TIM_H */
