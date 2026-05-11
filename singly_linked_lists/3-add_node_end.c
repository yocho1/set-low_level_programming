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
 * create_node - creates a new node with duplicated string
 * @str: string to duplicate
 * @len: length of the string
 *
 * Return: pointer to new node, or NULL on failure
 */
list_t *create_node(const char *str, unsigned int len)
{
	list_t *new_node;
	char *str_dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: string to duplicate and add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int len;

	len = _strlen(str);
	new_node = create_node(str, len);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
