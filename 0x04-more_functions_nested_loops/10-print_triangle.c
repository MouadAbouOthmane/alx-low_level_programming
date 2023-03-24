#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle.
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = (size - i); k > 1; k--)
		{
			_putchar(' ');
		}

		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
