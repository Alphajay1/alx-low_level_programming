#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1, if c is uppercase.
 * return 0, otherwise.
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
