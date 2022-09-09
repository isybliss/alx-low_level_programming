#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write program that prints alphabets in lowecase
 * Return: 0
 */

int main(void)
{
	char a_low;

	for (a_low = 'a'; a_low <= 'z'; a_low++)
	{
		putchar(a_low);
	}

	putchar('\n');
	return (0);
}

