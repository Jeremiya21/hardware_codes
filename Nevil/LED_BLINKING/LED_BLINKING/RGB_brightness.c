/*
 * RGB_brightness.c
 *
 * Created: 30-09-2023 15:40:29
 *  Author: nevil
 */ 
#include "led_function.h"
void RGB_brightness(uint8_t R,uint8_t G, uint8_t B){
	      TCA0_SINGLE_CMP0BUF = R;
	      TCA0_SINGLE_CMP1BUF = G;
	      TCA0_SINGLE_CMP2BUF = B;
		  	TCA0_SINGLE_CMP0 |= TCA0_SINGLE_CMP0BUF;
		  	TCA0_SINGLE_CMP1 |= TCA0_SINGLE_CMP1BUF;
		  	TCA0_SINGLE_CMP2 |= TCA0_SINGLE_CMP2BUF;
		  	
      }
	