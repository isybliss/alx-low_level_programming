#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate
 * of the string @str
 * @str: string to be duplicated
 *
 * Return: Pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int str_l;

	if (str == NULL)
		return (NULL);

	for (str_l = 0; str[str_l] != '\0'; str_l++)
		;

	alloc_mem = malloc(sizeof(*str) * str_l);

	if (alloc_mem == NULL)
		return (NULL);

	for (i = 0; i <= str_l; i++)
		alloc_mem[i] = str[i];

	return (alloc_mem);
}
