#include "main.h"

/**
 * _isalpha - function that checks for lowercase character
 *
 * @c: character
 *
 * Return: 1 if character is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
