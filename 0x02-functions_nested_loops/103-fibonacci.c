#include <stdio.h>

/**
 * main - point portal
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long int n1, n2, r, sum;

	n1 = 1;
	n2 = 0;
	r = 0;
	sum = 0;

	for (i = 0; i < 35; i++)
	{
		r = n1 + n2;
		n2 = n1;
		n1 = r;

		if (r % 2 == 0 && r <= 4000000)
		{
			sum += r;
		}
	}
	printf("%ld\n", sum);


	return (0);
}
