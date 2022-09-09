#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char a_low;

	for (a_low = 'a'; a_low <= 'z'; a_low++)
	{
		putchar(a_low);
		putchar('\n');
	}
	return (0);
}

