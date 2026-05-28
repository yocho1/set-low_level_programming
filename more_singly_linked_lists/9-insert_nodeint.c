#include "lists.h"
#include <stdlib.h>

/**
 * create_node - creates a new node
 * @n: integer to store in the node
 *
 * Return: pointer to new node, or NULL if malloc fails
 */
listint_t *create_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_at_beginning - inserts node at beginning of list
 * @head: pointer to head pointer
 * @new_node: node to insert
 *
 * Return: new_node (always successful here)
 */
listint_t *insert_at_beginning(listint_t **head, listint_t *new_node)
{
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_at_middle - inserts node at middle or end
 * @head: head pointer
 * @idx: index to insert at
 * @new_node: node to insert
 *
 * Return: new_node on success, NULL on failure
 */
listint_t *insert_at_middle(listint_t *head, unsigned int idx,
			    listint_t *new_node)
{
	listint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer of the list
 * @idx: index where new node should be added (starts at 0)
 * @n: integer to add to the new node
 *
 * Return: address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (insert_at_beginning(head, new_node));

	return (insert_at_middle(*head, idx, new_node));
}
