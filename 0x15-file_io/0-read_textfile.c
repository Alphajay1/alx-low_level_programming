#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to the name of the file to read.
 * @letters: number of letters it should read and write.
 *
 * Return: 0 if NULL, else the actual number of
 * letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buffer, letters);
	close(fd);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (rd != wr)
		return (0);
	return (wr);
}
