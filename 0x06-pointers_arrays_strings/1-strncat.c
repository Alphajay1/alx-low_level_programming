#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: source string.
 * @dest:destination string.
 * @n: bytes from src.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int position = 0;

	while (dest[position++])
	{
		length++;
	}
	for (position = 0; src[position] && position < n; position++)
	{
		dest[length++] = src[position];
	}
	return (dest);
}
