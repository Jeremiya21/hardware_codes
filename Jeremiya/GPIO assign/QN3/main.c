#include <atmel_start.h>
void delayfn(uint16_t ,uint16_t ,uint16_t );
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	delayfn(100,0,100);
	return 0;
	
}
 