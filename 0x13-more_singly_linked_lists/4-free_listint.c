#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: head.
 */

void free_listint(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return ;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
