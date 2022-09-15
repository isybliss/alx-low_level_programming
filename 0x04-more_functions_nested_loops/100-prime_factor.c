#include <stdio.h>
#include <math.h>

/**
 * main - calculate largest prime of 612852475143
 * Return: 0 (success)
 */

int main(void)
{
	long int x = 612852475143;
	double square = sqrt(x);
	long a, maxf;

	for (a = 1; a <= square; a++)
	{
		if (x % a == 0)
		{
			maxf = x / a;
		}
	}

	printf("%ld\n", maxf);
	return (0);
}

