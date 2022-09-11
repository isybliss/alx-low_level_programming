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
	int i, j;

	i = 0;
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

