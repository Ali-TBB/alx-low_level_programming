#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and its contents.
 *
 * @ht: Pointer to the hash table.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			node = current;
			current = current->next;
			free(node->key);
			free(node->value);
			free(node);
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	free(ht);
}
