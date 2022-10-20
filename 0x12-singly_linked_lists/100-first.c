#include <stdio.h>

/**
 * firstMain - prints a sentence before the main
 * function is executed
 */
void __attribute__ ((constructor)) firstMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
