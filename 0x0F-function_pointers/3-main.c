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

	optr = get_op_func(argv[2]);

	if (optr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}			
