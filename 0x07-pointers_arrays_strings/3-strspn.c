#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: substring.
 *
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[i] == '\0')
			{
				return (j);
			}
		}
	}

	return (i);
}
