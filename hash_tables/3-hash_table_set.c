#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *value_copy;

	/* Validate inputs */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in the chain */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key found: update value */
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* Key not found: create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert at beginning of the chain (collision handling) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
