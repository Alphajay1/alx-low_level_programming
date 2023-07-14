#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated to.
 * @s2: source string.
 * @n: number of bytes of s2 to copy to s1.
 *
 * Return: pointer to concatenated string, Null if error.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *conc;

	if (s1 == NULL)
		x = 0;

	else
	{
		for (x = 0; s1[x]; x++)
		{
			;
		}
	}
	if (s2 == NULL)
		y = 0;

	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
		y = n;

	conc = malloc((x + y + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		conc[z] = s1[z];
	for (z = 0; z < y; z++)
		conc[z + x] = s2[z];

	conc[x + y] = '\0';

	return (conc);
}
