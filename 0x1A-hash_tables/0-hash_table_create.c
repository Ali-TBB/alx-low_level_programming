#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: The size of the array for the hash table.
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht[size];
	int i;

	for (i = 0; i < size; i++)
	{
		ht[i] = malloc(sizeof(hash_table_t));
		if (ht[i] == NULL)
			return NULL;
		ht[i]->size = size;
	}
	return *ht;
}
