#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: returns a pointer to the duplicated string. It returns NULL
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0;
	unsigned int index = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (index < len)
	{
		s[index] = str[index];
		index++;
	}
	s[index] = '\0';

	return (s);
}
