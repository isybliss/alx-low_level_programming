#include "main.h"

/**
 * _strspn - function that gets the length of occurent of a string
 * @s: string to be looked into
 * @accept: character to match
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}

