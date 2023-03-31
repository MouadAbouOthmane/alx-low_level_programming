#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: destination.
 * @src: string.
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i,j;

	i = 0;

	while (dest[i])
	{
		i++
	}

	for (j = 0;src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
