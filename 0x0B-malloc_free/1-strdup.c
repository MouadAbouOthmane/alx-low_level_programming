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
	
	s = malloc(sizeof(char) * strlen(str));
	
	if (s == 0)
	{
		return (0);
	}
	while (*(str++))
	{
		*s++ = *str;
	}
	return (s);
}
