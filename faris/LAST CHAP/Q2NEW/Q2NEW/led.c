/*
 * led.c
 *
 * Created: 03-10-2023 13:55:41
 *  Author: faris
 */ 
#include "tca.h"
void led_bright(uint8_t R,uint8_t G,uint8_t B){
	
	TCA0.SINGLE.CMP0 = R;

	TCA0.SINGLE.CMP1 = G;

	TCA0.SINGLE.CMP2 = B;
	
}