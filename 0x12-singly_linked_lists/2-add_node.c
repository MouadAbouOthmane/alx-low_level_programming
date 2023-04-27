#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: head of nodes.
 * @str: data of node.
 *
 * Return: address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (!h || !head)
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
	h->next = *head;
	*head = h;
	return (h);

}
