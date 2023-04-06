#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: integer.
 *
 * Return: natural square root.
 */
int square_root(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}

/**
 * square_root - find natural square root
 * @n: number to find square root.
 * @i: iterator.
 *
 * Return: natural square root.
 */

int square_root(int n, int i)
{
	int r;

	r = i * i;
	if (r > n)
	{
		return (-1);
	}
	if (r == n)
	{
		return (r);
	}
	return (square_root(n, (i + 1)));
}
