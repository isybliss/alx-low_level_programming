#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of \ printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

