#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nletters, y = 0;

	if (!filename)
		return (-1);
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		nletters = write(fd, text_content, y);
		if (nletters == -1)
			return (-1);
	}
	close(file);
	return (1);
}
