#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all the numbers of base 16 in lowercase,
 * starting from 0, followed by a new line
 * Result: 0 after successful completion
 */
int main(void)
{
	int h;

	for (h = 48; h <= '57'; h++)
	{
		putchar(h);
	}

	for (h = 97; h <= 102; h++)
	{
		putchar(h);
	}

	putchar('\n');
	return (0);
}

