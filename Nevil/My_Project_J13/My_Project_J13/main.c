#include <atmel_start.h>
#include "My_Function.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		bool d = log_ic_level();
	}
}
