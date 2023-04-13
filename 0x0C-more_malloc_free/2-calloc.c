#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number.
 * @size: bytes.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (0);
	}

	ptr = malloc(size * nmemb);

	if (ptr == 0)
	{
		return (0);
	}

	while (nmemb--)
		ptr[nmemb] = 0;

	return (ptr);
}
