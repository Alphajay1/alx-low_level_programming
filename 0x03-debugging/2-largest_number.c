#include "main.h"

/**
 * largest_number - prints the largest of three integers.
 * @a: The first integer
 * @b: The second integer
 * @c: The third integer
 * Return: The largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
