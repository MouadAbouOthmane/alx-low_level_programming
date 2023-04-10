#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that prints its name.
 *
 * @argc: number of arguments.
 * @argv: contains all arguments.
 *
 * Return: 0 Success 1 fail.
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
		return (1);
	}
	
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
