#include <stdio.h>

/**
 * main - point portal
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int n1, n2, r;

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
			printf("%d", r);
		}
		else
		{
			printf(", %ld", (long) r);
		}
	}
	printf("\n");


	return (0);
}
