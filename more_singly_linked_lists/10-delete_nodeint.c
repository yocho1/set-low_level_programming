#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head pointer of the list
 * @index: index of the node to delete (starts at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	/* Check if list is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Case 1: Delete head node (index 0) */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Case 2: Delete node at middle or end */
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}

	/* Check if node to delete exists */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
