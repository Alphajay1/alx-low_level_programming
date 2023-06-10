#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: counts number of arguments on command line.
 * @argv: number of arguments passed to main.
 *
 * Return: 0, on success, 1, Error otherwise.
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);

	return (0);
}
