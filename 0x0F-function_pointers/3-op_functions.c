#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multplies a and b.
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives remainder of division of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of division of a and b.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
