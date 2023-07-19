#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: pointer to the function that prints a name.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
