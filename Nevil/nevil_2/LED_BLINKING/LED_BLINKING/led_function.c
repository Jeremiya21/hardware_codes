/*
 * led_function.c
 *
 * Created: 30-09-2023 12:39:29
 *  Author: Nevil
 */ 
#include "led_function.h"
void led_brightness(uint16_t num){
	TCB0.CCMP =255;
	TCB0.CCMPH =num;
}