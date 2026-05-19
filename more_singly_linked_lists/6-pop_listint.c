#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head pointer of the list
 *
 * Return: the head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	/* If list is empty, return 0 */
	if (head == NULL || *head == NULL)
		return (0);

	/* Save the data to return */
	data = (*head)->n;

	/* Save the head node to free later */
	temp = *head;

	/* Move head to the second node */
	*head = (*head)->next;

	/* Free the old head node */
	free(temp);

	/* Return the data */
	return (data);
}
