/*
 * toggle.c
 *
 * Created: 26-09-2023 09:29:33
 *  Author: faris
 */ 
#include "toggle.h"
#include "atmel_start.h"
void toggle(int delay1,int delay2,int delay3){
	/*TURNING RESPECTIVE LED WITH SPECIFIED DELAYS*/
			R0_MCU_set_level(true);
			_delay_ms(delay1);
 			G0_MCU_set_level(true);
 			_delay_ms(delay2);
 			B0_MCU_set_level(true);
 			_delay_ms(delay3);
 			
// 	/*COMBINATIONS OF LEDs*/
 	
 			R0_MCU_set_level(true); //RED ONLY
 			_delay_ms(delay1);
 			G0_MCU_set_level(true);	//RG
 			_delay_ms(delay1);
 			B0_MCU_set_level(true);	//RGB
 			_delay_ms(delay1);
 			R0_MCU_set_level(false);//GB
 			_delay_ms(delay1);		
 			G0_MCU_set_level(false);//B 
 			_delay_ms(delay1);
 			B0_MCU_set_level(false);//NOTHING
	

		
}