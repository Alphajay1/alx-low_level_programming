#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: string to be appended.
 * @s2: string to append.
 *
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int index;
	int dup = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		count++;

	new = malloc(sizeof(char) * count);

	if (new == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new[dup++] = s1[index];

	for (index = 0; s2[index]; index++)
		new[dup++] = s2[index];

	return (new);
}
