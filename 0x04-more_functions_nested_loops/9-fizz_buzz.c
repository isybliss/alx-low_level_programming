#include <stdio.h>

/**
 * main - print fizzbuzz for multiples of 3 and 5, fizz for multiples of 3
 * buzz for multiples of 5
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

