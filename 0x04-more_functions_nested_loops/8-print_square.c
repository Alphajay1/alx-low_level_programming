#include "main.h"

/**
 * print_square - prints a square.
 * @size: size of the square.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			if (x == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
