#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string.
 * Return: string.
 */

char *leet(char *s)
{
	char *str = s;

	while (*s != '\0')
	{
		if (*s == 'A' || *s == 'a')
		{
			*s = 48 + 4;
		}
		else if (*s == 'E' || *s == 'e')
		{
			*s = 48 + 3;
		}
		else if (*s == 'O' || *s == 'o')
		{
			*s = 48 + 0;
		}
		else if (*s == 'T' || *s == 't')
		{
			*s = 48 + 7;
		}
		else if (*s == 'L' || *s == 'l')
		{
			*s = 48 + 1;
		}

		s++;
	}
	return (str);
}
