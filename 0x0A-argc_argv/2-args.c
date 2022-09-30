#include <stdio.h>

/**
 * main - program that prints arguments it receives,
 * followed by new line
 * @argc: number of argument passed to the program
 * @argv: pointer to array that holds the strings
 * passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
