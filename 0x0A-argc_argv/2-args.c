#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: counts number of arguments.
 * @argv: total number of arguments passed.
 *
 * Return: 0, always.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
