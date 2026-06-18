#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table
 * @key: The key (string) to get the index for
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	/* Get the hash value using djb2 */
	hash = hash_djb2(key);

	/* Return the index (hash modulo size) */
	return (hash % size);
}
