#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: character
 *
 * Return: if character is lowercase 1 otherwise 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
