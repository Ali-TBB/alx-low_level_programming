#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table array.
 *
 * @key: The key string to be hashed.
 * @size: The size of the array for the hash table.
 * Return: The index where the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);
	hash_key = hash_key % size;
	return (hash_key);
}
