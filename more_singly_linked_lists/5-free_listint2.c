#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to the head pointer of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
