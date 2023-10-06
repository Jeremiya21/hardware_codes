/*
 * buzzer_mcu.c
 *
 * Created: 05-10-2023 09:55:25
 *  Author: nevil
 */ 
#include "led_function.h"
void buzzer_frequency(uint16_t num){
	uint8_t c = F_CPU/num;
	TCB0.CCMPL =c;
	TCB0.CCMPH =c/3;
}