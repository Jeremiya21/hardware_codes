/*
 * delay.c
 *
 * Created: 9/21/2023 1:43:07 PM
 *  Author: jeremiya
 */ 
#include <atmel_start.h>
#include <stdbool.h>
#include <util/delay.h>
#define __DELAY_BACKWARD_COMPATIBLE__
void delayfn(uint16_t dr,uint16_t dg,uint16_t db)
{
	R_MCU_set_level(true);
	_delay_ms(dr);
	R_MCU_set_level(false);
	_delay_ms(dr);
	G_MCU_set_level(true);
	_delay_ms(dg);
	G_MCU_set_level(false);
	_delay_ms(dg);
	B_MCU_set_level(true);
	_delay_ms(db);
	B_MCU_set_level(false);
	_delay_ms(db);
}