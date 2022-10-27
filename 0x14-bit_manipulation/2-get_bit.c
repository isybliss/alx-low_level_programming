#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: the number
 * @index: the position to read the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
