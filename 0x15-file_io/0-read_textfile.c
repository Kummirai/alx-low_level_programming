#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*Read_file - function that reads a text file and prints to standard output
*
*@filename: filename(poiter to a string)
*@letters: number of letters printed
*Return: number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t number_read, number_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	number_read = read(fd, buf, letters);
	number_written = write(STDOUT_FILENO, buf, number_read);

	close(fd);
	free(buf);

	return (number_written);
}
