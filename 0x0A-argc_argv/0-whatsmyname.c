#include <stdio.h>

/**
 * main - prints the name of a program, followed by new line
 * @argc: number of argument passed to the program
 * @argv: pointer to strings passed to the program
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

