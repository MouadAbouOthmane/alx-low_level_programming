#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array of integers.
 * @size: the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
