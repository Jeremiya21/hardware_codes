/*
 * adjust_led.c
 *
 * Created: 01-10-2023 14:30:57
 *  Author: faris
 */ 
#include "tcb.h"
void adjust_led(uint16_t duty_cycle){
	TCB0.CCMPL=255;
	TCB0.CCMPH=duty_cycle;
}