#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array of integer.
 * @n: number of element in array.
 *
 */

void reverse_array(int *a, int n)
{
	int i, l;

	for (i = 0; i < (n - 1 - i); i++)
	{
		l = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
