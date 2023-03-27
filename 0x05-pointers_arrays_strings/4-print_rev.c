#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len != -1)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
