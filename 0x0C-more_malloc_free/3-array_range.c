#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to newly created array or
 * NULL if min is greater than max or if insufficient
 * memory was available
 */

int *array_range(int min, int max)
{
	int range, i;
	int *ptr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		ptr[i] = min + 1;

	return (ptr);
}
