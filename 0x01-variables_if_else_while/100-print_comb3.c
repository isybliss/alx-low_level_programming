#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all possible different combinations of two digits.
 * Separate numbers by , followed by a space.
 * The two digits must be different.
 * Print only the smallest combination of two digits  in ascending order.
 * Use putchar function maximum of five times
 * All codes should be in main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}

