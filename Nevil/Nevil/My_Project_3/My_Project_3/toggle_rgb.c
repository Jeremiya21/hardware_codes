/*
 * toggle_rgb.c
 *
 * Created: 21-09-2023 15:03:06
 *  Author: nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
void led_ON(uint32_t delay_1,uint32_t delay_2,uint32_t delay_3){
// 	if(W){
// 		W0_MCU_toggle_level();
// 		_delay_ms(delay_1);
// 	}
	if(R){
		R0_MCU_toggle_level();
		_delay_ms(delay_1);
	}
	if(G){
		G0_MCU_toggle_level();
		_delay_ms(delay_2);
	}
	if(B){
		B0_MCU_toggle_level();
		_delay_ms(delay_3);
	}
}