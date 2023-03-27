#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 *
 * @a: first argument
 * @b: second argument
 */

void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
