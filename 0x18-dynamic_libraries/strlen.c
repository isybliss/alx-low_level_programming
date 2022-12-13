#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: value of the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}
	return (length);
}

