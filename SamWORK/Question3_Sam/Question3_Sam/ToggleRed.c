/*
 * ToggleRed.c
 *
 * Created: 9/26/2023 11:15:30 AM
 *  Author: samsunny
 */ 
#include "functionCall.h"

void ToggleRed(bool r)
{
	R0_MCU_toggle_level();
	//_delay_ms(*delay_R);
}