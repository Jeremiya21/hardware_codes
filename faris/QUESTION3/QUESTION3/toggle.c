/*
 * toggle.c
 *
 * Created: 26-09-2023 09:29:33
 *  Author: faris
 */ 
#include "toggle.h"
#include "atmel_start.h"
void toggle(int delay1,int delay2,int delay3){
	
	if(delay1<delay2 && delay1<delay3){
		if(delay2<delay3){
			R0_MCU_toggle_level();
			G0_MCU_toggle_level();
			B0_MCU_toggle_level();
			_delay_ms(delay1);
			R0_MCU_toggle_level();
			_delay_ms(delay2-delay1);
			G0_MCU_toggle_level();
			_delay_ms(delay3-delay2-delay1);
			B0_MCU_toggle_level();
			
		}
		if(delay3<delay2){
			R0_MCU_toggle_level();
			B0_MCU_toggle_level();
			G0_MCU_toggle_level();
			_delay_ms(delay1);
			R0_MCU_toggle_level();
			_delay_ms(delay3-delay1);
			B0_MCU_toggle_level();
			_delay_ms(delay2-delay3-delay1);
			G0_MCU_toggle_level();
			
		}
	}
// 		if(R==1){
// 			R0_MCU_toggle_level(true);
// 			_delay_ms(delay1);
// 		}
// 		else if(G==1){
// 			G0_MCU_toggle_level(true);
// 			_delay_ms(delay2);
// 		}
// 		else if(B==1){
// 			B0_MCU_toggle_level(true);
// 			_delay_ms(delay3);
// 		}
		
}