#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: array of integers.
 * @size: size of the array.
 * @action: a pointer to the function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *lst = array + size;

	if (array && size && action)
	{
		while (array < lst)
		{
			action(*array++);
		}
	}
}
