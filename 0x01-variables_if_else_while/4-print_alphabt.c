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
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
