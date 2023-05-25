#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int y;
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (y = 0; y < count; y++)
				_putchar(' ');
			_putchar('\\');

			if (count == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
