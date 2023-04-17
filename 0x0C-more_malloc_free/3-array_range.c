#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min number.
 * @max: max number.
 *
 * Return: poiner to the newly created  array.
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (0);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
		return (0);

	while (min <= max)
	{
		ptr[i++] = min++;
	}

	return (ptr);
}
