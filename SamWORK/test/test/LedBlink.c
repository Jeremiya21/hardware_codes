/*
 * LedBlink.c
 *
 * Created: 9/29/2023 4:03:30 PM
 *  Author: samsunny
 */ 
#include <atmel_start.h>
#include "tcb.h"
void LedBlink(uint8_t duty_cycle)
{
	TCB0.CCMPL=255;
	TCB0.CCMPH=duty_cycle;
}