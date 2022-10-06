#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates memory block usimg malloc and free
 * @ptr: pointer to old memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to new memory block or
 * NULL if @ptr is NULL or @new_size == 0 && @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return(ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return(NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}

	if (new_size > old_size && ptr != NULL)
	{
		new_ptr = malloc(new_size);
		if(new_ptr == NULL)
			return(new_ptr);

		for(i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + 1);

		free(ptr);
	}
	return (nptr);
}
