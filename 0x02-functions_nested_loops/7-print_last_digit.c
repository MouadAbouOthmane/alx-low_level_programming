#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: interger number
 * Return: the value of  the last digit.
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = abs(i);
	}

	_putchar(i + '0');
	return (i);
}
