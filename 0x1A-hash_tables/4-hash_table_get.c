#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: Pointer to the hash table.
 * @key: The key string.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index , key_i;
	hash_node_t *current;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		key_i = key_index((unsigned char *)current->key, ht->size);
		if (index == key_i)
		{
			return (current->value);
		}
		current->next = current;
	}
	return (NULL);
}
