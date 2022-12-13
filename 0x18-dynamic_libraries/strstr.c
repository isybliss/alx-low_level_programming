#include "main.h"

/**
 * _strstr - function to locate a substring, needle in a
 * string, haystack
 * @haystack: pointer to look for the substring
 * @needle: pointer to substring to be located
 * Return: pointer to the beginning of the located substring
 * or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

