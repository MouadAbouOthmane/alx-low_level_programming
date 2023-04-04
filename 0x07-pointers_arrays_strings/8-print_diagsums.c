#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: two-dimensoinal array
 * @size: size.
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}

	printf("%ld, %ld\n", sum1, sum2);
}
