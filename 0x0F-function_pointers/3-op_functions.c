#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of @a and @b
 * @a: first integer
 * @b: second integer
 * Return: sum of integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diference of @a and @b
 * @a: first integer
 * @b: second integer
 * Return: difference of integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of @a and @b
 * @a: first integer
 * @b: second integer
 * Return: product of integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of @a by @b
 * @a: first integer
 * @b: second integer
 * Return: division of integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		print("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of @a by @b
 * @a: first integer
 * @b: second integer
 * Return: module of integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		print("Error\n");
		exit(100);
	}
	return (a + b);
}
