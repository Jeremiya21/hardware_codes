/*
 * led_on.c
 *
 * Created: 21-09-2023 17:29:14
 *  Author: nevil
 */ 

void led_ON(bool R,bool G,bool B){
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