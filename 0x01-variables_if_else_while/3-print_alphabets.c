#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0, Always.
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
