/*
 * ToggleGreen.c
 *
 * Created: 9/26/2023 11:15:59 AM
 *  Author: samsunny
 */ 

#include "functionCall.h"

void ToggleGreen(uint32_t *delay_G)
{
	
	G0_MCU_toggle_level();
	_delay_ms(*delay_G);

}