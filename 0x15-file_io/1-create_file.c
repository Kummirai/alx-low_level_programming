#include "main.h"
#include <stdio.h>

/**
 * create_file - create a file
 * @filename: the file to be created
 * @text_content: text copied to file
 * Return: 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nofletters;
	int writeReturn;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nofletters = 0; text_content[nofletters]; nofletters++)
		;

	writeReturn = write(fd, text_content, nofletters);

	if (writeReturn == -1)
		return (-1);

	close(fd);
	return (1);
}
