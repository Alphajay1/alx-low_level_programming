#include "main.h"

/**
 * _strlen_recursion - calculates the length of the string pointed to by s,
 * excluding the terminating null byte ('\0').
 * @s: characters to be counted.
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
