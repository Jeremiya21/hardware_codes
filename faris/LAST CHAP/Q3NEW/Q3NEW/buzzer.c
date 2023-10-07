/*
 * buzzer.c
 *
 * Created: 05-10-2023 09:46:54
 *  Author: faris
 */ 
#include "tcb.h"
#include "clock_config.h"
void buzzer(uint16_t input_freq){
	uint8_t count=F_CPU/input_freq;
	TCB0_CCMPL=count;
	TCB0_CCMPH=count/2;
}