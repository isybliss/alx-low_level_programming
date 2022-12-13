#include "main.h"

/**
 * *_strpbrk - searches a string for a set of characters
 * @s: string to be searched
 * @accept: string containing character to be compared with
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

