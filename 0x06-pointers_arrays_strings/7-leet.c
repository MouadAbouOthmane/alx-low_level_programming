#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string.
 * Return: string.
 */

char *leet(char *s)
{
	char *str = s;
	int i;

	while (*s != '\0')
	{
		if (*s == 'A' || *s == 'a')
		{
			*s = '0' + 4;
		}
		else if (*s == 'E' || *s == 'e')
		{
			*s = '0' + 3;
		}
		else if (*s == 'O' || *s == 'o')
		{
			*s = '0';
		}
		else if (*s == 'T' || *s == 't')
		{
			*s = '0' + 7;
		}
		else if (*s == 'L' || *s == 'l')
		{
			*s = '0' + 1;
		}

		s++;
	}
	return (str);
}
