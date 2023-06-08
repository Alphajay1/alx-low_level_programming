#include "main.h"

int prime_helper(int divisor, int num);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to check out.
 *
 * Return: integer 1 if prime, 0, otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_helper(2, n));
}

/**
 * prime_helper - gives the prime number.
 * @divisor: the number to divide with.
 * @num: the number to be checked.
 *
 * Return: 1, if prime, 0, otherwise.
 */

int prime_helper(int divisor, int num)
{
	if (num % divisor == 0)
	{
		return (0);
	}
	if (divisor > num / 2)
	{
		return (1);
	}
	return (prime_helper(divisor + 1, num));
}
