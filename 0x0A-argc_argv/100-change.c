#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments on the command line.
 * @argv: number of arguments passed to the command line.
 *
 * Return: 0, Always.
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int cents = 0;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n == '-')
	{
		printf("0\n");
	}
	while (n > 0)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		cents += 1;
	}
	printf("%d\n", cents);
	return (0);
}
