/*
 * function.c
 *
 * Created: 26-09-2023 10:24:49
 *  Author: nevil

#include "toggle_rgb.h"

void led_ON(bool W,bool R,bool G,bool B){
	if(W){
		W0_MCU_toggle_level();
	}
	if(R){
		R0_MCU_toggle_level();
	}
	if(G){
		G0_MCU_toggle_level();
	}
	if(B){
		B0_MCU_toggle_level();
	}
}
/*void led_selector(bool R,bool G,bool B){
	if(R){led_ON(1,0,0);}
	if(G){led_ON(0,1,0);}
   // if(W){led_ON(1,0,0,0);}
	if(B){led_ON(0,0,0,1);}
	//if(R == 1 && W==1){led_ON(1,0,0);}
	//if(W==1 && G==1){led_ON(1,0,1,0);}
	//if(W==1 && B==1){led_ON(1,0,0,1);}
	if(G==1 && B==1){led_ON(0,1,1);}
	if(R == 1 && G==1){led_ON(1,1,0);}
	if(R == 1 && B==1){led_ON(1,0,1);}
	if(R == 1 && B==1 && G ==1){led_ON(1,1,1);}
	//if(R == 1 && G==1 && W==1 ){led_ON(1,1,1,0);}
	//if(W == 1 && B==1 && G==1){led_ON(1,0,1,1);}
	//if(W == 1 && B==1 && G==1 && R ==1){led_ON(1,1,1,1);}
	if(B==0 && G==0 && R ==0){led_ON(0,0,0);}		
	
} */
#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include <util/delay.h>
void leddelay(uint16_t delay_1,uint16_t delay_2,uint16_t delay_3){
		R0_MCU_set_level(true);
		G0_MCU_set_level(true);
		B0_MCU_set_level(true);
		_delay_ms(delay_1);
		R0_MCU_set_level(false);//bg
		_delay_ms(delay_2);
		B0_MCU_set_level(false);//g only
		_delay_ms(delay_2);
		R0_MCU_set_level(true);//rg
		_delay_ms(delay_1);
		G0_MCU_set_level(false);//r only
		_delay_ms(delay_1);
		B0_MCU_set_level(true);//rb
		_delay_ms(delay_3);
		R0_MCU_set_level(false);//b
		_delay_ms(delay_3);
		B0_MCU_set_level(false);
		_delay_ms(delay_2);
}