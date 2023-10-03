/*
 * led.c
 *
 * Created: 03-10-2023 11:55:42
 *  Author: faris
 */ 
#include "tca.h"
void led_bright(uint8_t R,uint8_t G,uint8_t B){
	
	TCA0.SINGLE.CMP0 = R; /* Compare Register 0: 0x0 */

	TCA0.SINGLE.CMP1 = G; /* Compare Register 1: 0x0 */

	TCA0.SINGLE.CMP2 = B; /* Compare Register 2: 0x0 */
	
}