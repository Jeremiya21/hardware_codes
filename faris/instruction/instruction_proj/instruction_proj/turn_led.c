/*
 * turn_led.c
 *
 * Created: 20-09-2023 14:32:04
 *  Author: faris
 */ 
#include <atmel_start.h>
void turn_led(bool R,bool G,bool B,bool W){
	
		R0_set_level(R);
		G0_set_level(G);
		B0_set_level(B);
		W0_set_level(W);
	
}