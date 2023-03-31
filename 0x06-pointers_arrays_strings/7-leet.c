#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string.
 * Return: string.
 */

char *leet(char *s)
{
	char *str = s;
	char lett[] = {'A', 'E', 'O', 'T', 'L'};
	int rep[] = {4, 3, 0, 7, 1};
	int i;
	
	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == lett[i] || *s == lett[i] + 32)
			{
				*s = '0' + rep[i];
			}
		}
		s++;
	}
	return (str);
}
