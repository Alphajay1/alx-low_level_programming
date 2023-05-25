#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9, Do not print 2 and 4
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		_putchar('0' + x);
	}
	_putchar('\n');
}
