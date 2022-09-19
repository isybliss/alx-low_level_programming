#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

