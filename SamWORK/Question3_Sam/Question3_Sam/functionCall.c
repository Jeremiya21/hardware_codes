/*
 * functionCall.c
 *
 * Created: 9/26/2023 11:09:31 AM
 *  Author: samsunny
 */ 

#include "functionCall.h"
#include <stdlib.h>

void functionCall(uint16_t delay_R,uint16_t delay_B,uint16_t delay_G)
{
	ToggleRed(delay_R);
	ToggleGreen(delay_G);
	ToggleBlue(delay_B);
	
	
	R0_MCU_set_level(true);
	B0_MCU_set_level(true);
	G0_MCU_set_level(true);  //RBG is on
	_delay_ms(delay_R);
	R0_MCU_set_level(false); //GB is on
	_delay_ms(delay_G);
	G0_MCU_set_level(false);
	R0_MCU_set_level(true);  // RB is on
	_delay_ms(delay_B);
	B0_MCU_set_level(false);
	G0_MCU_set_level(true); //RG is on
	_delay_ms(delay_G);	
		
	
}