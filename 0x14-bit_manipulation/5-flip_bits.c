#include "main.h"

/**
 * flip_bits - need to flip to get from one number to another.
 *
 * @n: number.
 * @m: other number.
 *
 * Return: the number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;
	unsigned long int r;

	while (r)
	{
		if (r & 1ul)
			c++;
		r = r >> 1;
	}

	return (c);

}
