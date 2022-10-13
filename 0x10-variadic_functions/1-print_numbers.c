#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
