#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0, if successful.
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
