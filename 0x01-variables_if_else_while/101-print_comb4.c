#include <stdio.h>

/**
 * main - portal
 *
 * Return: 0 for success
 */

int main(void)
{

	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');

	return (0);
}
