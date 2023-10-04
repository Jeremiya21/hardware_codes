
#include "Led_Combo_Color.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) 
	{
		for(uint8_t r=0;i<255;i++)
		{
			Led_Combo_Color(r,g,b);
			_delay_ms(10);		
		}
		
		for (uint8_t b=0;k<255;k++)
		{
			Led_Combo_Color(r,g,b);
			_delay_ms(10);
		}
		for (uint8_t b=0;k<255;k++)
		{
			Led_Combo_Color(r,g,b);
			_delay_ms(10);
		}
		
	}
}
