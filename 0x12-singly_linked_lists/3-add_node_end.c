#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end.
 *
 * @head: head of node.
 * @str: data of node.
 *
 * Return: the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !h)
		return (0);

	if (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (0);
		}
		h->len = h->str ? strlen(h->str) : 0;
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = h;
	}
	else
	{
		*head = h;
	}

	return (h);
}
