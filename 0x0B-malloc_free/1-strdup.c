#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str.
 * @str: string to be duplicated.
 *
 * Return: returns a pointer to the duplicated string. It returns NULL
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
	unsigned int n, i;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;

	dup = malloc(sizeof(char) * i);

	if (dup == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		dup[n] = str[n];

	return (dup);
}
