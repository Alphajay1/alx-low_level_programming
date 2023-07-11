#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 * @size: length of the array.
 * @c: characters of the array.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int index;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		s[index] = c;

	return (s);
}
