#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:Print all possible combination of single digit number
 * separated by , followed by a space in ascending order
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}

