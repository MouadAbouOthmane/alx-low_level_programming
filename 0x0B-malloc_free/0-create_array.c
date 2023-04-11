#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars.
 *
 * @size: size of array.
 * @c: characters.
 *
 * Return: pointer of char or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == 0 ||  size == 0)
	{
		return ('\0');
	}

	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
