#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if character is  uppercase
 *
 * @c: input character
 *
 * Return: 1 if c is  uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
