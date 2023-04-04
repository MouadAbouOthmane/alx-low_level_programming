#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: this is the main string to be examined.
 * @needle: this is the sub-string to be searched in haystack.
 *
 * Return: a pointer point to the first character of the found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else if (needle[j] == '\0')
		{
			return (haystack + i - j);
		}
		else
		{
			j = 0;
		}
	}

	if (j > 0)
	{
		return (haystack + i - j);
	}

	return ('\0');
}
