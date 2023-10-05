/*
 * LedBrightness.c
 *
 * Created: 10/1/2023 10:07:20 AM
 *  Author: samsunny
 */ 
#include "LedBrightness.h"

void  LedBrightness(uint8_t duty_cycle)
{
	TCB0.CCMPL=255;
	TCB0.CCMPH=duty_cycle;
}