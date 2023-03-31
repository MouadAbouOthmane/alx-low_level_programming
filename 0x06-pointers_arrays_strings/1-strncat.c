#include "main.h"

/**
 * *_strncat -  function that concatenates two strings.
 *
 * @dest: destination.
 * @src: string.
 * @n: number of bytes.
 *
 * Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; i < n && src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
