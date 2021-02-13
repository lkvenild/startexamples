#include <atmel_start.h>

/**
 * Initializes MCU, drivers and middleware in the project
 **/
void atmel_start_init(void)
{
	// This file is a test from github
	system_init();
	touch_init();
}
