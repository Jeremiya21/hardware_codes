/*
 * led_function.c
 *
 * Created: 30-09-2023 12:39:29
 *  Author: nevil
 */ 
#include "led_function.h"
void led_brightness(uint16_t num){
	TCB0_CCMP =255;
	TCB0_CCMPH =num;
}