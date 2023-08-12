#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * code97 - checks for the correct number of output.
 * @argc: is the number of arguments.
 *
 * Return: void.
 */
void code97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * code98 - it checks that file_from exists and it can be read.
 * @find: checks if it is true or false.
 * @file: it is the file_from name.
 * @fd_from: -1, or is the file descriptor of file_from
 * @fd_to: -1, or file descriptor of the file_to.
 *
 * Return: void.
 */
void code98(ssize_t find, char *file, int fd_from, int fd_to)
{
	if (find == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);

		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * code99 - to check that file_to was created and can be written on
 * @find: checks for true or false
 * @file: if the file_to name
 * @fd_from: is the file descriptor of file_from or as -1.
 * @fd_to: is the file descriptor of file_to or as -1.
 *
 * Return: void.
 */
void code99(ssize_t find, char *file, int fd_from, int fd_to)
{
	if (find == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * code100 - checks to see that the file descriptors were closed.
 * @find: checks to see if true or false.
 * @fd: is a file descriptor.
 *
 * Return: void.
 */
void code100(int find, int fd)
{
	if (find == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: the number of command line args passed.
 * @argv: is the array of pointers to the args.
 *
 * return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int close_from, close_to;
	ssize_t lenrd, lenwr;
	char buffer[1024];
	mode_t file_gvp;

	code97(argc);
	fd_from = open(argv[1], O_RDONLY);
	code98((ssize_t)fd_from, argv[1], -1, -1);
	file_gvp = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_gvp);
	code99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenrd = 1024;
	while (lenrd == 1024)
	{
		lenrd = read(fd_from, buffer, 1024);
		code98(lenrd, argv[1], fd_from, fd_to);
		lenwr = write(fd_to, buffer, lenrd);
		if (lenwr != lenrd)
			lenwr = -1;
		code99(lenwr, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	code100(close_to, fd_to);
	code100(close_from, fd_to);
	return (0);
}
