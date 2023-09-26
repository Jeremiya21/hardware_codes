/*
 * ToggleBlue.c
 *
 * Created: 9/26/2023 11:15:43 AM
 *  Author: samsunny
 */ 
#include "functionCall.h"

void ToggleBlue(uint32_t *delay_B)
{
	B0_MCU_toggle_level();
	_delay_ms(*delay_B);
}