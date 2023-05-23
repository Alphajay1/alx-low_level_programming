#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int j;
	char x;

	for (j = 0; j < 10; j++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
