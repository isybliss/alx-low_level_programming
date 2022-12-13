#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of copied memory area
 * @src: source of memory area to be copied
 * @n: number of memory area to be copied
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

