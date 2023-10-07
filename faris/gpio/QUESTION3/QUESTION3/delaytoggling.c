/*
 * delaytoggling.c
 *
 * Created: 26-09-2023 15:56:47
 *  Author: faris
 */ 
void delaytoggling(int delay1,int delay2,int delay3){
	
	R0_MCU_toggle_level();
	_delay_ms(delay1);
	R0_MCU_toggle_level();
	
	G0_MCU_toggle_level();
	_delay_ms(delay2);
	G0_MCU_toggle_level();
	
	B0_MCU_toggle_level();
	_delay_ms(delay3);
	B0_MCU_toggle_level();
	
}