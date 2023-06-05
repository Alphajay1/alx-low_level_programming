#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: character to be printed.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int length;
	int i;

	length = 0;
	i = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
