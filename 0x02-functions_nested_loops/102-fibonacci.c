#include <stdio.h>

/**
 * main - point portal
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long int n1, n2, r;

	n1 = 1;
	n2 = 0;
	r = 0;

	for (i = 0; i < 50; i++)
	{
		r = n1 + n2;
		n2 = n1;
		n1 = r;

		if (i == 0)
		{
			printf("%ld", r);
		}
		else
		{
			printf(", %ld", r);
		}
	}
	printf("\n");


	return (0);
}
