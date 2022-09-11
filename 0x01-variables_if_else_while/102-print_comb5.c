#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all possible combinations of two two-digit numbers
 * ranging from 0 to 99, separated by a space and printed in ascending order.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	while (c < 10)
	{
		while (d < 10)
		{
			while (e < 10)
			{
				while (f < 10)
				{
					if (((c * 10) + d) < ((e * 10) + f))
					{
						putchar('0' + c);
						putchar('0' + d);
						putchar(' ');
						putchar('0' + e);
						putchar('0' + f);
						if (c + d + e + f != 9 + 8 + 8 + 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
					f++;
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

