#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @c: string to encode
 * Return: encoded string
 */

char *leet(char *c)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (c[i] == l[j])
			{
				k = j;
				c[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (c);
}

