#include "main.h"
/**
 * get_endianness - check the endianness
 * 
 * Return: 1 if little endian - 0 in big endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c == 1)
		return (1);
	else
		return (0);
}
