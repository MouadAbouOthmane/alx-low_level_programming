#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if character is  uppercase
 *
 * @c: input character
 *
 * Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
