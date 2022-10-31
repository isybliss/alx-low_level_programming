#include "main.h"

/**
 * read_textfile - read a text file and write it to stdout
 * @filename: file to read and write
 * @letters: number of letters to read and write
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, y, i;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i == -1)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);

	y = write(STDOUT_FILENO, buf, i);
	if (y == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
