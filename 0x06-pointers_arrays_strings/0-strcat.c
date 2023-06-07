#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: source string.
 * @dest: destination string.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int add;

	count = 0;
	add = 0;

	while (dest[add++])
	{
		count++;
	}
	for (add = 0; src[add]; add++)
	{
		dest[count++] = src[add];
	}
	return (dest);
}
