#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0, Always.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
