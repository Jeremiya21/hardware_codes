/*
 * led_ON.c
 *
 * Created: 20-09-2023 14:06:46
 *  Author: Nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
void led_ON(bool W,bool R,bool G,bool B){
	W0_MCU_set_level(W);
	R0_MCU_set_level(R);
	G0_MCU_set_level(G);
	B0_MCU_set_level(B);
	
}

