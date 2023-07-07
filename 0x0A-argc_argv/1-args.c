#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the size of argument arrays.
 * @argv: the array size of argc.
 *
 * Return: 0 if successful.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
