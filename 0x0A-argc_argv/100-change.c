#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments passed to the program
 * @argv: pointer to array of strings passed to the program
 *
 * Return: if number of array is not exactly one -1
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int cent, amount, coin;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	coin = 0;
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amount > 0)
	{
		if (amount >= 25)
			cent = 25;
		else if (amount >= 10)
			cent = 10;
		else if (amount >= 5)
			cent = 5;
		else if (amount >= 2)
			cent = 2;
		else
			cent = 1;

		coin += amount / cent;
		amount %= cent;
	}

	printf("%d\n", coin);
	return (0);
}
