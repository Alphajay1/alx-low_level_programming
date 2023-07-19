#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations.
 * @argc: number of arguments passed.
 * @argv: array of elements of  argc passed.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	func = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
