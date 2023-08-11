#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of the string
 * @str: pointer to a string.
 *
 * Return: length of a string.
 */
size_t _strlen(char *str)
{
	size_t index;

	for (index = 0; str[index]; index++)
		;
	return (index);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure, 1 if the file exists and -1 if the
 * file does not exist or if you do not have the required permissions to write
 * the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (length == -1)
		return (-1);
	return (1);
}
