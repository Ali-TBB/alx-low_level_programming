#include "hash_tables.h"

/**
 * shash_table_create - Creates a new sorted hash
 * table with the specified size.
 *
 * @size: The size of the hash table.
 * Return: A pointer to the newly created hash table, or NULL
 * if memory allocation fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->array = malloc(size * sizeof(shash_table_t));
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);

}
/**
 * shash_table_set - Inserts or updates a key-value
 * pair in the sorted hash table.
 *
 * @ht: A pointer to the sorted hash table.
 * @key: The key to insert or update.
 * @value: The value associated with the key.
 * Return: 1 if the operation is successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *current;
	unsigned long int index;
	char *n_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(current->value);
			current->value = n_value;
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL || node->key == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	sort_hash_table(ht, node);
	return (1);
}
/**
 * sort_hash_table - Sorts the sorted hash table after inserting a new node.
 *
 * @ht: A pointer to the sorted hash table.
 * @node: The node to be inserted into the sorted hash table.
 */
void sort_hash_table(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(node->key, current->key) < 0)
		{
			node->snext = current;
			node->sprev = current->sprev;
			current->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		current = current->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}
/**
 * shash_table_get - Retrieves the value associated with a given
 * key in the sorted hash table.
 *
 * @ht: A pointer to the sorted hash table.
 * @key: The key to search for.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints the contents of the
 * sorted hash table in key-value pairs.
 *
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int a = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (a == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		a = 1;
		current = current->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints the contents of
 * the sorted hash table in reverse order of insertion.
 *
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int a = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (a == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		a = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted
 * hash table and frees its memory.
 *
 * @ht: A pointer to the sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *node;
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
