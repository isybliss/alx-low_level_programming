#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number whose factorial is to be returned
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return 1;
	}

	return(n * factorial(n - 1));
}
