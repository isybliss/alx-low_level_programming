#include "main.h"

/**
 * print_number - function that prints a integer
 * @n: integer to ne printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

