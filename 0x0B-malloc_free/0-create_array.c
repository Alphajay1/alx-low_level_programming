#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array.
 * @c: number of characters.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (n = 0;n < size; n++)
		s[n] = c;
	return (s);
}
