#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to character
 * @c: character to be located in string
 * Return: @s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}

