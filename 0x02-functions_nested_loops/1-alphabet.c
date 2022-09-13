nclude "main.h"
/**
 * main - function that prints the alphabets in lowercase,
 * followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

