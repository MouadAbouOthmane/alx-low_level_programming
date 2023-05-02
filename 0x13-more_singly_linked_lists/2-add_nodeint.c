#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 *
 * @h: head of node.
 * @n: integer.
 *
 * Return: the address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (0);

	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
