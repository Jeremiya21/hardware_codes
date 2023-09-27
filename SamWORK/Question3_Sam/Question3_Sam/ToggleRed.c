/*
 * ToggleRed.c
 *
 * Created: 9/26/2023 11:15:30 AM
 *  Author: samsunny
 */ 
 #include "functionCall.h"

void ToggleRed(uint16_t delay_R)
{
	R0_MCU_set_level(true);
	_delay_ms(delay_R);
	R0_MCU_set_level(false);
	_delay_ms(delay_R);
}