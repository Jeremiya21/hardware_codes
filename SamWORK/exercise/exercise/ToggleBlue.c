/*
 * ToggleBlue.c
 *
 * Created: 23-09-2023 20:40:23
 *  Author: SUNNY
 */ 

#include <atmel_start.h>
#include <stdint.h>
#include <util/delay.h>

void ToggleBlue(uint32_t *delay_B)
{
		B0_MCU_toggle_level();
		_delay_us(*delay_B);
}