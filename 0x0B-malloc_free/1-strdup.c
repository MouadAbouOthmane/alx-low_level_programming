#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - pointer to a newly allocated space in memory.
 *
 * @str: string.
 *
 * Return: a pointer to the duplicated string, or null if it fail.
 */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == 0)
	{
		return (0);
	}

	size = strlen(str);
	s = malloc(sizeof(*s) * size + 1);

	if (s == 0)
	{
		return (0);
	}

	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
