#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: Pointer to the hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int a = 1;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (a)
				{
					printf("'%s': '%s'", current->key, current->value);
					a = 0;
				}
				else
				{
					printf(", '%s': '%s'", current->key, current->value);
				}
				current = current->next;
			}

		}
	}
	putchar('}');
	putchar('\n');
}
