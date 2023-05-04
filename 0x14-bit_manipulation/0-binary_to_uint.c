#include "main.h"
#include <math.h>

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
		n += d * pow(2, (len - i) - 1);
	}

	return (n);
}
