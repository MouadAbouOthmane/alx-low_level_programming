#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: string
 * @c: character
 *
 * Return: the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
