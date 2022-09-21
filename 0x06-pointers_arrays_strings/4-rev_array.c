#include "main.h"

/**
 * reverse_array - function to reverse the content of an array
 * @n: number of elements of the array
 * @a: an array of integers
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, t;

	i = 0;
	while (i < n)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}

