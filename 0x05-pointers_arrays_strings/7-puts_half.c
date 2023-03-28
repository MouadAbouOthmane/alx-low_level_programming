#include "main.h"

/**
 * puts_half -  function that prints half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}

	len = (len - 1) / 2;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
