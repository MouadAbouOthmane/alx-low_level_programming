#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int is_first = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
	
		while (head)
		{
			if (is_first == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			is_first = 1;
		}
	}
	printf("}\n");

}
