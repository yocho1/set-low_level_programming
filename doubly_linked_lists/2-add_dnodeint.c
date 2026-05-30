#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head pointer of the list
 * @n: integer to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Fill the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* If list is not empty, update old head's prev */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update head to point to new node */
	*head = new_node;

	return (new_node);
}
