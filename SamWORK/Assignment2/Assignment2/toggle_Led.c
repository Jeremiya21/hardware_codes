/*
 * toggle_Led.c
 *
 * Created: 23-09-2023 10:40:14
 *  Author: SUNNY
 */ 
#include <atmel_start.h>
#include <stdbool.h>
#include <util/delay.h>
#include <stdint.h>

void toggle_Led(bool R,bool G,bool B,bool W,uint32_t uSdelay)
{
	while(true)
	{
	R0_MCU_set_level(R);
	G0_MCU_set_level(G);
	B0_MCU_set_level(B);
	W0_MCU_set_level(W);
	_delay_us(uSdelay);	
	
	R0_MCU_set_level(false);
	G0_MCU_set_level(false);
	B0_MCU_set_level(false);
	W0_MCU_set_level(false);
	_delay_us(uSdelay);	
	
	}
}