#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two string.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer contain the contents of s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *s;

	size1 = s1 ? strlen(s1) : 0;
	size2 = s2 ? strlen(s2) : 0;
	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == 0)
	{
		return (0);
	}

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j + 1] = '\0';

	return (s);

}
