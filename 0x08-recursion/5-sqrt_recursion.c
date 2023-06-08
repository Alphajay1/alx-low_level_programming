#include "main.h"

int sqrt_pointer(int x, int r);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to look for its square root.
 *
 * Return: the root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_pointer(1, n));
	}
}

/**
 * sqrt_pointer - calculates the square root of a natural number.
 * @x: number to square.
 * @r: number given.
 *
 * Return: the root of the number given.
 */

int sqrt_pointer(int x, int r)
{
	if (x * x == r)
	{
		return (x);
	}
	if (x * x > r)
	{
		return (-1);
	}
	return (sqrt_pointer(x + 1, r));
}
