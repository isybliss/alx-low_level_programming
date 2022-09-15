#include "main.h"

/**
 * print_numbers - function that prints 0 to 9,
 * followed by a new line
 * Return: number 0 - 9
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}

