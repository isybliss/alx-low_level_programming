#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string to be concatenated
 * @src: source string
 * @n: number of bytes of src that will be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

