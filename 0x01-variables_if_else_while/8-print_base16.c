#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all the numbers of base 16 in lowercase,
 * starting from 0, followed by a new line
 * Result: 0
 */
int main(void)
{
	char h = '0';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}

	char h = 'a';

	while (h <= 'f')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}

