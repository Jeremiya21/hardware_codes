#include <atmel_start.h>
#include <stdbool.h>
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	bool dir;
	
	/* Replace with your application code */
	while (1) {
		
		dir=ret_logic_level();
	}
}
