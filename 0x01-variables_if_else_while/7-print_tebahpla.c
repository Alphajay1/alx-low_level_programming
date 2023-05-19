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

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
