#include <stdio.h>

/**
 * main - portal
 *
 * Return: 0 for success
 */

int main(void)
{

	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		if (c <= '9' || c >= 'a')
		{
			putchar(c);
		}
	}

	putchar('\n');


	return (0);
}
