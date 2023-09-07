#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: hash table.
 * @key: key string.
 * @value: string value.
 *
 * Return: 1 if succeeded Otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *head;
	hash_node_t *new_node;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	head = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	if (value)
	{
		new_node->value = malloc(strlen(value) + 1);
		if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		strcpy(new_node->value, value);
	}

	if (head)
		new_node->next = head;
	ht->array[index] = new_node;
	return (1);
}
