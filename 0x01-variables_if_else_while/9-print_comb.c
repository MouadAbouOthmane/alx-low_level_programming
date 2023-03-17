#include <stdio.h>

/**
 * main - portal
 *
 * Return: 0 for success
 */

int main(void)
{

	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
