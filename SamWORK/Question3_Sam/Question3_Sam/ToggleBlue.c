/*
 * ToggleBlue.c
 *
 * Created: 9/26/2023 11:15:43 AM
 *  Author: samsunny
 */ 

 #include "functionCall.h"
 
 void ToggleBlue(uint16_t delay_B)
 {
	B0_MCU_set_level(true);
 	_delay_ms(delay_B);
    B0_MCU_set_level(false);
	_delay_ms(delay_B);
 }