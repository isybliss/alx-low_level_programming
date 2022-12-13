/**
 * add - add 2 numbers
 * @a: first number
 * @b: second number
 * Return: the sum of the 2 numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract b from a
 * @a: first number
 * @b: second number
 * Return: the subtracted result
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: the multiple of the 2 numbers
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide 2 numbers
 * @a: first number
 * @b: second number
 * Return: the division of the 2 numbers
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - remainder between 2 numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the 2 numbers
 */

int mod(int a, int b)
{
	return (a % b);
}

