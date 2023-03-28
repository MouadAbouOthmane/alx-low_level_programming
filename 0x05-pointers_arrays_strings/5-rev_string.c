#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string
 */

void rev_string(char *s)
{
	int i, len;
	char c;

	len = 0;
	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
