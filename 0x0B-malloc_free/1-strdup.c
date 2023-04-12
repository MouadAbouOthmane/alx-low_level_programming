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
	int i;
	
	s = malloc(sizeof(char) * strlen(str));
	
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
