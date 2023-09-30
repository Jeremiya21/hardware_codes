/*
 * turn_led.c
 *
 * Created: 20-09-2023 14:32:04
 *  Author: faris
 */ 
#include <atmel_start.h>
void turn_led(bool R,bool G,bool B,bool W){
	if(R=true){
		R0_set_level(true);
	}
	if(G=true){
		G0_set_level(true);
	}
	if(B=true){
		B0_set_level(true);
	}
	if(W=true){
		W0_set_level(true);
	}
}