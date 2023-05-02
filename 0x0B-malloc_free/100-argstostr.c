#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: count arguments.
 * @av: vector arguments.
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{

	int i, j, len, lng;
	char *s;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0, len = 0; i < ac; i++, len++)
		len += strlen(av[i]);

	s = malloc(sizeof(char) * len + 1);
	if (s == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0, lng = 0; av[i][j] != '\0'; j++, lng++)
			s[lng] = av[i][j];

		s[lng] = '\n';
		lng++;
	}

	s[lng] = '\0';
	return (s);
}
