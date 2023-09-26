/*
 * ToggleRed.c
 *
 * Created: 23-09-2023 20:35:50
 *  Author: SUNNY
 */ 
#include <atmel_start.h>
#include <stdint.h>
#include <util/delay.h>

void ToggleRed(uint32_t *delay_R)
{
		R0_MCU_toggle_level();
		_delay_us(*delay_R);	
}