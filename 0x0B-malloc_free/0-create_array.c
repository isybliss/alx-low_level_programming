#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initialize it with a specific char @c
 *
 * @size: size of the array
 * @c: array of characters
 *
 * Return: pointer to the array or NULL if size is zero
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
