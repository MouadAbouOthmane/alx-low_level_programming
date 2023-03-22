#include "main.h"

/**
 * print_times_table - function that prints the n times table.
 * @n: number between 0 and 15
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');

			for (j = 1; j <= n; j++)
			{
				r = j * i;
				_putchar(' ');
				if ((r / 100) > 0)
				{
					_putchar('1');
					_putchar('0' + ((r % 100) / 10));
					_putchar('0' + ((r % 100) % 10));
				}
				else if ((r / 10) > 0)
				{
					_putchar(' ');
					_putchar('0' + (r / 10));
					_putchar('0' + (r % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
