#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line.
 * @separator:  is the string to be printed between the strings.
 * @n:  is the number of strings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	const char *string;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(pa, const char *);
		printf("%s", (string != NULL) ? (string) : "(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(pa);
	printf("\n");
}
