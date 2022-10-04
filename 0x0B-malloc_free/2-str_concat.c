#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: NULL or pointer of an array of characters
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_l, s2_l, i, j;
	char *alloc_memory;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;

	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;

	alloc_memory = malloc(sizeof(char) * (s1_l + s2_l) + 1);

	if (alloc_memory == NULL)
		return (NULL);

	for (i = 0; i < s1_l; i++)
		alloc_memory[i] = s1[i];

	for (j = 0; j <= s2_l; j++, i++)
		alloc_memory[i] = s2[j];

	return (alloc_memory);
}
