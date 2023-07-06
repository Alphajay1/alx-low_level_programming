#include "main.h"

int _is_prime(int divisor, int num);

/**
 * is_prime_number - checks if number is a prime number.
 * @n: number to be checked.
 *
 * Return: returns 1 if prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (_is_prime(2, n));
}

/**
 * _is_prime - checks if a number is prime.
 * @divisor: number to divide with.
 * @num: the number being checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int _is_prime(int divisor, int num)
{
	if (num < 2 || num % divisor == 0)
		return (0);

	if (divisor > num / 2)
		return (1);

	return (_is_prime(divisor + 1, num));
}
