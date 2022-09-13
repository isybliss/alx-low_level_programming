#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar(a);
		a++;
	}
}

