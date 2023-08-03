#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: the number to flip.
 * @m: the number to flip n to.
 *
 * Return: number of bits you would need to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int connector, find;
	unsigned int count, index;

	find = 1;
	connector = n ^ m;
	count = 0;

	for (index = 0; index < (sizeof(unsigned long int) * 8); index++)
	{
		if (find == (connector & find))
			count++;
		find <<= 1;
	}
	return (count);
}
