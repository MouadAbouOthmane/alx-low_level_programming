#include "main.h"

/**
 * pow - computes the power of a number.
 *
 * @x: double
 * @y: double
 *
 * Return:the power raised to the base number.
 */
double _pow(double x, double y)
{
	int i = 0;
	double r;

	if (y == 0)
		return (1);

	r = x;
	while (y - 1 > i)
	{		
		r *= x;
		i++;
	}

	return (r);
}



/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string.
 *
 * Return: convert number or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len, d;

	if (!b)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		d = b[i] == '1' ? 1 : 0; 
		n += d * _pow(2, (len - i) - 1);
	}

	return (n);
}
