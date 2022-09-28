#include "main.h"

/**
 * _pow_recursion - returns the value of an integer raised
 * to the power of another integer
 * @x: integer
 * @y: integer (power of x)
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
