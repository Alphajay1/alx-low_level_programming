#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @x: The number to be checked.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit = (-(x % 10));
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
