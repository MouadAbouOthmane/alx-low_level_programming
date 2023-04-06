#include "main.h"

/**
 * is_prime_number - check if number is prime.
 * @n: number.
 * Return: 1 if it prime otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, 2));
}

/**
 * prime - recusion for number and check if prime.
 * @number: prime number.
 * @i: iterator.
 * Return: 1 if number is prime, 0 if is composite.
 */

int prime(int number, int i)
{

	if (number % i == 0)
	{
		return (0);
	}

	if (number == i + 1)
	{
		return (1);
	}

	return (prime(number, i + 1));

}
