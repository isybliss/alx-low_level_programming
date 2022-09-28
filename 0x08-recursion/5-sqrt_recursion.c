#include "main.h"

/**
 * _sqrt_recursion(int n) - returns natural square root
 * of a number n
 * @n: integer whose square root is to be returned
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}

/**
 * sqrt_check - check for the square root of n
 * @n: integer to find square root
 * @i: square root of n
 * Return: @i
 */

int sqrt_check(int i, int n)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqrt_check(i + 1, n));
}
