#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - adds all its its parameters.
 * @n: last known fixed argument before the variable args.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);
	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);
	return (sum);
}
