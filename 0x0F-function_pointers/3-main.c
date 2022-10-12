#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: no of argument
 * @argv: pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*optr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	optr = get_op_func(argv[2]);

	if (optr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", optr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
