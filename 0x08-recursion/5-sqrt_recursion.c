#include "main.h"

int _sqrt_recursion_finder(int x, int num);

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number to find the square root of.
 *
 * Return: square root number to the number n.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt_recursion_finder(1, n));
}

/**
 * _sqrt_recursion_finder - finds the square root of a number.
 * @x: the root number of a square.
 * @num: the number to get the square root of.
 *
 * Return: the root of a number.
 */

int _sqrt_recursion_finder(int x, int num)
{
	if (x * x == num)
		return (x);

	if (x * x > num)
		return (-1);

	return (_sqrt_recursion_finder(x + 1, num));
}
