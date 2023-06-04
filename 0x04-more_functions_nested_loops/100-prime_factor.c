#include <stdio.h>

void prime_factor(long num);

/**
 * main - calls the prime_factor function.
 *
 * Return: 0, Always.
 */
int main(void)
{
	prime_factor(612852475143);

	return (0);
}

/**
 * prime_factor - finds and prints the largest prime factor of a number.
 * @num: the number to be divided.
 *
 * Return: Nothing.
 */
void prime_factor(long num)
{
	long primeNum;

	primeNum = 2;

	while (primeNum != num)
	{
		if (num % primeNum == 0)
		{
			num /= primeNum;
		}
		else
		{
			primeNum++;
		}
	}
	printf("%ld\n", num);
}
