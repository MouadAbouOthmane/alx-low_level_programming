#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *next_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head)
		{
			next_node = head->next;
			if (head->key)
				free(head->key);
			if (head->value)
				free(head->value);
			free(head);
			head = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
