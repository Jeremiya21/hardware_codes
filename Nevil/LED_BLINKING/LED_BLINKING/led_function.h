/*
 * led_function.h
 *
 * Created: 03-10-2023 12:30:06
 *  Author: nevil
 */ 
#include <stdint.h>
#include <atmel_start.h>


#ifndef LED_FUNCTION_H_
#define LED_FUNCTION_H_
void led_brightness(uint16_t num);
void RGB_brightness(uint8_t R,uint8_t G, uint8_t B);




#endif /* LED_FUNCTION_H_ */