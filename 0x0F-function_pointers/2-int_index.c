#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: array of integer
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: index integer if integer that matches condition
 * of @cmp was found in @array otherwise -1 if size <= 0
 * or @array or @cmp is NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}

