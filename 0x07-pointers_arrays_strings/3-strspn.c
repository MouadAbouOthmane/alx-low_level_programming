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

	for (i = 0; i < accept[i] != '\0'; i++)
	{
		for (j = 0; j < s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (j);
			}
		}
	}

	return (j);
}
