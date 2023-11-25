#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number to be flipped
 * @m: the number to flip n to.
 *
 * Return: number of flips to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, check;
	unsigned int i, num;

	check = 1;
	x = n ^ m;
	num = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (x & check))
			num++;
		check <<= 1;
	}
	return (num);
}
