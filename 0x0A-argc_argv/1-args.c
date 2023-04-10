#include <stdio.h>

/**
 * main - program that prints its name.
 *
 * @argc: number of arguments.
 * @argv: contains all arguments.
 *
 * Return: 0 Success 1 fail.
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
