#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/


int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[i] == '1')
			dec-val += 1 << (len - i - 1;
		else if (b[i] != '0')
			return (0);
	}

	return (dec_val);
}
