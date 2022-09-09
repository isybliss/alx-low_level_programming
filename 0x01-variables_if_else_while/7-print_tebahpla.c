#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}

	putchar('\n');
	return (0);
}

