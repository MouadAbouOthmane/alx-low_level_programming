#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 *
 * @n:  is the number of times the character \ should be printed.
 *
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
