#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints a char.
 * @c: the char to print.
 *
 * Return: void.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an integer.
 * @i: integer to print.
 *
 * Return: void.
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float.
 * @f: float to print.
 *
 * Return: void.
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_str - prints a string.
 * @s: string to print.
 *
 * Return: void.
 */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything, follwed by a new line.
 * @format: is a list of types of args passed to the function.
 *
 * Return: nothing.Ignore any non char, float,string(char *) and
 * integer (int) data type. If string is Null, print nil.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list pa;
	char *separator = "";

	print_type struct_t[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(pa, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (struct_t[j].type != NULL)
		{
			if (*(struct_t[j].type) == format[i])
			{
				printf("%s", separator);
				struct_t[j].func(pa);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(pa);
	printf("\n");
}
