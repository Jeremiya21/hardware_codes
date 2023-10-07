/*
 * led_cntrl.c
 *
 * Created: 10/3/2023 12:34:30 PM
 *  Author: jeremiya
 */ 

#include "led_cntrl.h"
void led_cntrl(uint8_t red,uint8_t green, uint8_t blue)
{
	TCA0.SINGLE.CMP0BUF=red;
	//TCA0_SINGLE_CMP0=red;
	TCA0.SINGLE.CMP1BUF=green;
	//TCA0_SINGLE_CMP1=green;
	TCA0.SINGLE.CMP2BUF=blue;
	//TCA0_SINGLE_CMP2=blue;
}