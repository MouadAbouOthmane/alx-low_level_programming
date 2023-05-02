#include "main.h"

/**
 * last_index - calculate last index of string.
 *
 * @s: string.
 *
 * Return: last index
 */
int last_index(char *s)
{
	int i = 0;

	if (*s > 0)
	{
		i += last_index(s + 1) + 1;
	}
	return (i);
}

/**
 * palindrome - if string is palindrome.
 *
 * @s: string.
 * @begin: begin.
 * @end: end.
 * @pal: pal.
 *
 * Return: 1 or 0.
 */

int palindrome(char *s, int begin, int end, int pal)
{

	if (s[begin] != s[end])
	{
		return (0);
	}
	else if ((begin == end + 1 && pal == 0) || (begin == end && pal != 0))
	{
		return (1);
	}
	else
	{
		return (palindrome(s, begin + 1, end - 1, pal));
	}

}
/**
 * is_palindrome - check if string is palindrome.
 *
 * @s: string.
 *
 * Return:  1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = last_index(s);

	return (palindrome(s, 0, len - 1, len % 2));
}
