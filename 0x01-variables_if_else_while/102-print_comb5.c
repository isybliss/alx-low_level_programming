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
	int c = 48, d = 48, e = 48, f = 49;

	while (c < 58)
	{
		while (d < 58)
		{
			while (e < 58)
			{
				while (f < 58)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (!(c == 57 &&
						d == 56 &&
						e == 57 &&
						f == 57))
					{
						putchar(',');
						putchar(' ');
					}
					f++;
				}
				e++;
				f = 48;
			}
			d++;
			d = c;
			f = d + 1;
		}
		c++;
		d = 48;
		e = c;
		f = d + 1;
	}
	putchar('\n');
	return (0);
}


