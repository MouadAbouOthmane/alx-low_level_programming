#include <stdio.h>

/**
 * main - portal
 *
 * Return: 0 for success
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c !='q' && c != 'e')
		{
			putchar(c);		
		}

	}

	putchar('\n');


	return (0);
}
