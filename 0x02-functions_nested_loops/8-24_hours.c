#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 */

void jack_bauer(void)
{
	char i, j, k, l;

	for (i = '0'; i < '3'; i++)
	{

		for (j = '0'; j <= '9'; j++)
		{

			if (i == '2' && j == '4')
			{
				break;
			}

			for (l = '0'; l <= '5'; l++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(l);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}

