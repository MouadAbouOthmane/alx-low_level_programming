#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: a pointer point to newly allocated space contains s1 followed by
 * the first n bytes of s2 and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i = 0, j = 0;
	char *s;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	

	if ((int) n < size2)
	{
		size2 = n;
	}
	s = malloc(sizeof(char) * (size1 + size2 + 1));

	if (s == 0)
	{
		return (0);
	}

	for (i = 0; i < size1 - 1; i++)
		s[i] = s1[i];

	for (j = 0; j < size2 - 1; j++)
		s[i++] = s2[j];

	s[i + 1] = '\0';

	return (s);
}
