/*
 * func.c
 *
 * Created: 26-09-2023 12:29:03
 *  Author: Anora
 */ 
#include <atmel_start.h>

void led_ON(bool W,bool R,bool G,bool B){
	W0_MCU_set_level(W);
	R0_MCU_set_level(R);
	G0_MCU_set_level(G);
	B0_MCU_set_level(B);
	
}
