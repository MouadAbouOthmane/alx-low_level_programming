#include "main.h"

/**
 * puts_half -  function that prints half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int len;

	while (str[len])
	{
		len++;
	}

	len = len / 2;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\0');
}
