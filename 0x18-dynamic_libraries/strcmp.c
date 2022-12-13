#include "main.h"

/**
 * _strcmp - fumnction to compare two strings
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		diff = *s1 - *s2;
	}
	return (diff);
}

