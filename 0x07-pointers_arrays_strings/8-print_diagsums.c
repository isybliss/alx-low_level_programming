#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals
 * @a: Pointer to an array
 * @size: Size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

