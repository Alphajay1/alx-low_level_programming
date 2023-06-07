#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: factorial number.
 *
 * Return: factorial number, 1, if 1 or 0, -1 on error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
