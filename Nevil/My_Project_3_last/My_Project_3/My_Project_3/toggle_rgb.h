/*
 * toggle_rgb.h
 *
 * Created: 21-09-2023 15:03:43
 *  Author: nevil
 */ 

#include <atmel_start.h>
#ifndef TOGGLE_RGB_H_
#define TOGGLE_RGB_H_
#include <stdbool.h>
void leddelay(uint16_t delay_1,uint16_t delay_2,uint16_t delay_3);
void led_ON(bool W,bool R,bool G,bool B);
//void led_selector(bool W,bool R,bool G,bool B);
void led_selector(bool R,bool G,bool B,uint16_t delay_1,uint16_t delay_2,uint16_t delay_3);




#endif /* TOGGLE_RGB_H_ */