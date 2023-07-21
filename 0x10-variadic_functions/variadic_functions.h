#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Desc: Header file for the directory
 * 0x10-variadic_functions. It contains all the prototypes used in
 * the tasks and the _putchar function prototype.
 */

#include <stdarg.h>

/**
 * struct print - it prints type with its corresponding print function.
 * @type: shows daata type being passed.
 * @func: is the function pointer to the function to print data type.
 */
typedef struct print
{
	char *type;
	void(*func)(va_list arg);
} print_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
