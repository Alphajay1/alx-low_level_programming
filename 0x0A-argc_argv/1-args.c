#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: counts the number of arguments.
 * @argv: number of arguments.
 *
 * Return: number of of arguments.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
