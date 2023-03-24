#include "main.h"

/**
 * more_numbers - function that prints the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}

}
