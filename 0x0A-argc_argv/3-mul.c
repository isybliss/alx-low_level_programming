#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two numbers of a program,
 * followed by new line
 * @argc: number of argument passed to the program
 * @argv: pointer to array that holds the strings
 * passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	
	return (0);
}

