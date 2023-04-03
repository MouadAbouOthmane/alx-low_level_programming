#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @s: memory area
 * @b: constant byte
 * @n: number of first byte in memory.
 *
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
