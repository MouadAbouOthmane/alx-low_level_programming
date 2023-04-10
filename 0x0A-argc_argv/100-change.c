#include <stdio.h>
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
	int cents;
	int quarters, dimes, nickels, two_cents, pennies;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* how many cents */
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* calculate the number of quarters*/
	quarters = cents / 25;
	cents = cents - quarters * 25;
	/* calculate the number of dimes*/
	dimes = cents / 10;
	cents = cents - dimes * 10;
	/* calculate the number of nickels */
	nickels = cents / 5;
	cents = cents - nickels * 5;
	/* calculate the number of two-cents*/
	two_cents = cents / 2;
	cents = cents - two_cents * 2;
	/* calculate the number of pennies*/
	pennies = cents / 1;
	cents = cents - pennies * 1;
	/*sum coins*/
	coins = quarters + dimes + nickels + two_cents + pennies;
	/*print total number of coins*/
	printf("%d\n", coins);
	return (0);
}
