#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: memory area.
 * @src: the address of memory copies.
 * @n: the number of the memory byte.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
