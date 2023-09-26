/*
 * func.c
 *
 * Created: 21-09-2023 11:26:09
 *  Author: nevil
 */ 

#include "func.h"
void led_on(uint16_t delay_val)
{
	R0_MCU_set_level(true);
	_delay_ms(delay_val);
// 	R0_MCU_set_level(false);
// 	_delay_ms(delay_2);
// 	G0_MCU_set_level(true);
// 	_delay_ms(delay_2);
// 	G0_MCU_set_level(false);
// 	_delay_ms(delay_2);
}
