#include <stdio.h>

/**
 * main - portal
 *
 * Return: 0 for success
 */

int main(void)
{

	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
