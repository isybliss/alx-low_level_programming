#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number producing the last didit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;

	_putchar(a + '0');
	return (a);
}

