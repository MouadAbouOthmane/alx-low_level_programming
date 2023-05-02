#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 *
 * @head: head.
 *
 * Return: sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
