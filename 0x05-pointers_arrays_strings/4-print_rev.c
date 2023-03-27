#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int len = 1;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len != 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
