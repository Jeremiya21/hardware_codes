/*
 * function.c
 *
 * Created: 9/21/2023 11:22:36 AM
 *  Author: jeremiya
 */ 
#include <atmel_start.h>
#include <util/delay.h>
#include "myfunction.h"
#include <stdint.h>
#define __DELAY_BACKWARD_COMPATIBLE__
void function(enum LED led,uint16_t delay_1)
{
	if(led==R)
	{
		R0_MCU_set_level(true);
		_delay_ms(delay_1);
		R0_MCU_set_level(false);
		_delay_ms(delay_1);
	}
	else if(led==G)
	{
		G0_MCU_set_level(true);
		_delay_ms(delay_1);
		G0_MCU_set_level(false);
		_delay_ms(delay_1);
	}
	else if(led==B)
	{
		B0_MCU_set_level(true);
		_delay_ms(delay_1);
		B0_MCU_set_level(false);
		_delay_ms(delay_1);
	}
	else if(led==W)
	{
		W0_MCU_set_level(true);
		_delay_ms(delay_1);
		W0_MCU_set_level(false);
		_delay_ms(delay_1);
	}
}