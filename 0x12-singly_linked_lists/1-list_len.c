#include "lists.h"

/**
 * list_len - function that prints number of elements of a list_t list.
 *
 * @h: head.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
