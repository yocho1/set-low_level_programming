#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head pointer of the list
 * @idx: index where new node should be added (starts at 0)
 * @n: integer to add to the new node
 *
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* Case 1: Insert at beginning (index 0) */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Walk to the node at index idx-1 (the node before insertion) */
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	/* If index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Case 2: Insert at end (current is last node) */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Case 3: Insert in the middle */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
