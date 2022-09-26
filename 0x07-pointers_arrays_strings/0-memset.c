#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory area to fill
 * @b: value of byte to fill up the memory area @s
 * @n: size of the memory area
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

