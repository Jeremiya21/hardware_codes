/*
 * ToggleGreen.c
 *
 * Created: 23-09-2023 20:39:42
 *  Author: SUNNY
 */ 

#include <atmel_start.h>
#include <stdint.h>
#include <util/delay.h>

void ToggleGreen(uint32_t *delay_G)
{
	
		G0_MCU_toggle_level();
		_delay_us(*delay_G);

}