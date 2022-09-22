#include "main.h"

/**
 * print_number - function that prints a integer
 * @n: integer to ne printed
 * Return: void
 */

void print_number(int n)
{
	int div = 1;
	int i;
	int j;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	for (i = 0; n / div > 9; i++, div = div * 10)
		;

	for (; div >= 1; n = n % div, div = div / 10)
	{
		j = n / div;
		_putchar('0' + j);
	}
}

