#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - Inserts or updates a key/value pair in a hash table.
 *
 * @ht: Pointer to the hash table.
 * @key: The key string.
 * @value: The value string associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current, *head;
    unsigned long int index;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->value == NULL || new_node->key == NULL)
    {
        free(new_node->key);
		free(new_node->value);
        free(new_node);
        return (0);
    }
    new_node->next = NULL;
    index = key_index((unsigned char *)key, ht->size);
    if (ht->array[index] != NULL)
    {
        head = ht->array[index];
        current = head;
        while (current != NULL)
        {
            if (strcmp(current->key, key) == 0)
            {
                free(current->value);
                current->value = strdup(value);
                if (current->value == NULL)
                    return (0);
                free(new_node->key);
                free(new_node->value);
                free(new_node);
                return (1);
            }
            current = current->next;
        }
        new_node->next = head;
        ht->array[index] = new_node;
    }
    else
        ht->array[index] = new_node;

    return (1);
}
