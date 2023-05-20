#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0, Always.
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9;  y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
