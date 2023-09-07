#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: key string.
 * @size: size of array.
 *
 * Return: index in array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
