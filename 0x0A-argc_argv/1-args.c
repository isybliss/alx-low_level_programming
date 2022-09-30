#include <stdio.h>
/**
 * main - prints the number of argument passed to a program,
 * followed by new line
 * @argc: number of argument passed to the program
 * @argv: pointer to array that holds the strings
 * passed to the program
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

