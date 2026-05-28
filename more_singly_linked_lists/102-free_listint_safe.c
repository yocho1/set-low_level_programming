#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list safely (handles loops)
 * @h: pointer to the head pointer of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next, *slow, *fast;
	size_t count = 0;
	int loop_detected = 0;

	if (h == NULL || *h == NULL)
		return (0);

	/* Detect loop using Floyd's algorithm */
	slow = *h;
	fast = *h;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	/* If no loop, free normally */
	if (!loop_detected)
	{
		while (*h != NULL)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
			count++;
		}
		return (count);
	}

	/* Find the start of the loop */
	slow = *h;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	/* Free nodes before the loop */
	current = *h;
	while (current != slow)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
	}

	/* Free nodes in the loop and break it */
	/* First, set all nodes in loop to be freed */
	while (current->next != slow)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
	}

	/* Free the last node */
	free(current);
	count++;

	*h = NULL;
	return (count);
}
