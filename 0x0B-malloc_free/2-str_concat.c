#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 *
 * Return: destination string s1.
 */
char *str_concat(char *s1, char *s2)
{
	int index;
	int add = 0;
	int length = 0;
	char *conc;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	for (index = 0; s1[index] || s2[index]; index++)
		length++;

	conc = malloc(length * sizeof(char));

	if (conc == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		conc[add++] = s1[index];

	for (index = 0; s2[index]; index++)
		conc[add++] = s2[index];

	return (conc);
}
