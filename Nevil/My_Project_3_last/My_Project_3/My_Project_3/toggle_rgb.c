/*
 * toggle_rgb.c
 *
 * Created: 21-09-2023 15:03:06
 *  Author: nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
void led_selector(bool R,bool G,bool B,uint16_t delay_1,uint16_t delay_2,uint16_t delay_3){
	if(R){led_ON(0,1,0,0);}
	    _delay_ms(delay_1);
	if(G){led_ON(0,0,1,0);}
		_delay_ms(delay_2);
	if(B){led_ON(0,0,0,1);}
		_delay_ms(delay_3);
	//if(R == 1 && W==1){led_ON(1,1,0,0);}
		
	//if(W==1 && G==1){led_ON(1,0,1,0);}
	//if(W==1 && B==1){led_ON(1,0,0,1);}
	if(G==1 && B==1){led_ON(0,0,1,1);}
		_delay_ms(delay_2);
		_delay_ms(delay_3);
	if(R == 1 && G==1){led_ON(0,1,1,0);}
	    _delay_ms(delay_1);
		_delay_ms(delay_2);
	if(R == 1 && B==1){led_ON(0,1,0,1);}
		_delay_ms(delay_1);
		_delay_ms(delay_3);
	if(R == 1 && B==1 && G ==1){led_ON(0,1,1,1);}
		_delay_ms(delay_1);
		_delay_ms(delay_2);
		_delay_ms(delay_3);
		
	//if(R == 1 && G==1 && W==1 ){led_ON(1,1,1,0);}
	//if(W == 1 && B==1 && G==1){led_ON(1,0,1,1);}
	//if(W == 1 && B==1 && G==1 && R ==1){led_ON(1,1,1,1);}
	if( B==0 && G==0 && R ==0){led_ON(0,0,0,0);}

}
/*	R0_MCU_set_level(true);
_delay_ms(delay_1);
R0_MCU_set_level(false);
_delay_ms(delay_1)
G0_MCU_set_level(true);
_delay_ms(delay_2);
G0_MCU_set_level(false);
_delay_ms(delay_2)
B0_MCU_set_level(true);
_delay_ms(delay_3);
B0_MCU_set_level(false);
_delay_ms(delay_3)*/