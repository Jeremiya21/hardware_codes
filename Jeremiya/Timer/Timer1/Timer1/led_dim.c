/*
 * led_dim.c
 *
 * Created: 9/30/2023 11:46:45 AM
 *  Author: jeremiya
 */ 

#include "led_dim.h"

void led_dim(uint8_t brightness)
{
	TCB0.CCMPH=brightness;
	TCB0.CCMPL=255;
	
}