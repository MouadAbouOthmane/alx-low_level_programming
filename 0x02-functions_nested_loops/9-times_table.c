#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table.
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				if ((r / 10) >= 1)
				{
					if (j == 9)
					{
						_putchar(' ');
						_putchar('0' + (r / 10));
						_putchar('0' + (r % 10));
					}
					else
					{
						_putchar(' ');
						_putchar('0' + (r / 10));
						_putchar('0' + (r % 10));
						_putchar(',');
					}
				}
				else
				{
					if (j == 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + (r % 10));
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + (r));
						_putchar(',');
					}
				}
			}
		}
		_putchar('\n');
	}
}
