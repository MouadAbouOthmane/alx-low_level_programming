#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
