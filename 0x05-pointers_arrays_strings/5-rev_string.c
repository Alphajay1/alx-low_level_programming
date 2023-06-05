#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int length;
	int rev;
	char temp;

	length = 0;
	rev = 0;

	while (s[rev++])
		length++;

	for (rev = length - 1; rev >= length / 2; rev--)
	{
		temp = s[rev];
		s[rev] = s[length - rev - 1];
		s[length - rev - 1] = temp;
	}
}
