/*
 * toggle_rgb.c
 *
 * Created: 21-09-2023 15:03:06
 *  Author: nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
void led_ON(uint32_t delay_1,uint32_t delay_2,uint32_t delay_3){
	R0_MCU_set_level(true);
	G0_MCU_set_level(true);
	_delay_ms(delay_1);
	R0_MCU_set_level(false);
	_delay_ms(delay_1);
    G0_MCU_set_level(true);
	_delay_ms(delay_2);
	G0_MCU_set_level(false);
	_delay_ms(delay_2);
	B0_MCU_set_level(true);
	_delay_ms(delay_3);
	B0_MCU_set_level(false);
	_delay_ms(delay_3);
}