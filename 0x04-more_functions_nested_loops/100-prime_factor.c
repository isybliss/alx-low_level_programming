#include <stdio.h>

/**
 * main - calculate largest prime of 612852475143
 * Return: 0 (success)
 */

int main(void)
{
	long int x = 612852475143;
	long a, maxf;

	for (a = 2; a < x; a++)
	{
		if (x % a == 0)
		{
			maxf = x / a;
		}
	}

	printf("%ld\n", maxf);
	return (0);
}

