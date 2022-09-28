#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to check
 * Return: 1 if prime or 0 if not prime
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

/**
 * prime_check - function to check if a number is prime
 * @f: factor used to check
 * @n: number to check
 * Return: 1 or 0
 */

int prime_check(int f, int n)
{
	if (n < 2 || n % f == 0)
		return (0);
	else if (f > n / 2)
		return (1);
	else
		return (prime_check(f + 1, n));
}
