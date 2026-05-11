#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: string to duplicate and add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Calculate string length (using our own function) */
	len = _strlen(str);

	/* Duplicate the string */
	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Fill the new node */
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	/* Update head to point to new node */
	*head = new_node;

	return (new_node);
}
