/*
 * LedToggle.h
 *
 * Created: 9/26/2023 10:02:41 AM
 *  Author: samsunny
 */ 


#ifndef LEDTOGGLE_H_
#define LEDTOGGLE_H_

#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include <util/delay.h>
void LedToggle(bool R,bool G,bool B,bool W,uint16_t uSdelay);



#endif /* LEDTOGGLE_H_ */