/*
 * ToggleGreen.c
 *
 * Created: 9/26/2023 11:15:59 AM
 *  Author: samsunny
 */ 


 #include "functionCall.h"
 
 void ToggleGreen(uint16_t delay_G)
{
	
 	G0_MCU_set_level(true);
	 _delay_ms(delay_G);
	G0_MCU_set_level(false);
	_delay_ms(delay_G);
	 	
 
}