#include <atmel_start.h>
#include "function.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	function(R,10);
	return 0;
}
