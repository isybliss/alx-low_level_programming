#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *str;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		str = va_arg(a, char *);
		printf("%s", (str == NULL) ? "(nil)" : str);
	}
	printf("\n");
	va_end(a);
}
