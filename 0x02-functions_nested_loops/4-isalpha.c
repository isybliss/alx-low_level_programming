#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters.
 * @c: letter to be tested
 * Return: 0
 */
int _isalpha(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

