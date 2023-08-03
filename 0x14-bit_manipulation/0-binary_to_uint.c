#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars.
 *
 * Return:  the converted number, or 0 if,
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index;
	int len;

	index = 0;
	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		index <<= 1;
		if (b[len] == '1')
			index += 1;
	}
	return (index);
}
