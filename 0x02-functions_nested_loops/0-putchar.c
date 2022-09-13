#include "main.h"
/**
 * main -Entry point
 * Description: print _putchar, foolowed by a new line.
 * Return: 0
 */
int main(void)
{
	char isy[] = "_putchar";

	int c = 0;

	while (c < 8)
	{
		_putchar(isy[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}

