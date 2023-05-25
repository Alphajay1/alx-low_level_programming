#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int count;

	for (count = 1; count <= n; count++)
	{
		_putchar('_');
		if (n <= 0)
		{
			break;
		}
	}
	_putchar('\n');
}
