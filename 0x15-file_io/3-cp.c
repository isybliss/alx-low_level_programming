#include "main.h"

/**
 * main - copy the content of file_from to file_to
 * @argc: number of argument passed to the program
 * @argv: array of arrguments
 *
 * Return: Always 0.
 */

int main(int argc, char*argv[])
{
	int file_from, file_to, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usuage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(file_from, buf, BUFSIZ)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(file_from);
	n = close(file_to);
	if (m == -1 || n == -1)
	{
		if (m == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (n == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
