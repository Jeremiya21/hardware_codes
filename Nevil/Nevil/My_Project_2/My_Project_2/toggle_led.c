/*
 * toggle_led.c
 *
 * Created: 21-09-2023 11:20:50
 *  Author: Nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
void led_ON(bool W,bool R,bool G,bool B,uint32_t delay_1){
	if(W){
		W0_MCU_toggle_level();
	}
	if(R){
		R0_MCU_toggle_level();
	}
	if(G){
		G0_MCU_toggle_level();
	}
	if(B){
		B0_MCU_toggle_level();
	}
    _delay_ms(delay_1);
}