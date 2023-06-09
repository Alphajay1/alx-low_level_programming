#include <stdio.h>

/**
 * main - creates a program that prints its name,
 * followed by a new line.
 * @argc: counts the number of arguments on command-line.
 * @argv: total number of parameters.
 *
 * Return: 0,if successful.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
