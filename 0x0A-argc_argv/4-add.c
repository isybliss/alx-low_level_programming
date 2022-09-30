#include <stdio.h>

/**
 * main - prints the name of a program, followed by new line
 * @argc: number of argument passed to the program
 * @argv: pointer to array that holds the strings
 * passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for(i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				puts("Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	
	printf("%d\n", sum)

        return (0);
}
