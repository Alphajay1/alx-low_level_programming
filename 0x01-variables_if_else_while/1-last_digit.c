#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0, Always.
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		int x;

		x = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n % 10 == 0)
	{
		int x;

		x = n % 10;
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
		int x;

		x = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
