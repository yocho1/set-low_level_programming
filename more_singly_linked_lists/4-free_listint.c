#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
