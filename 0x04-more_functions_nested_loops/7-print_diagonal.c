#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 *
 * @n:  is the number of times the character \ should be printed.
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

	}
}
