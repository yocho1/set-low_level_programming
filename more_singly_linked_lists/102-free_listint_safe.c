#include "lists.h"
#include <stdlib.h>

/**
 * detect_loop_free - detects if a linked list has a loop
 * @head: pointer to the head of the list
 *
 * Return: pointer to meeting point if loop, NULL otherwise
 */
listint_t *detect_loop_free(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);
	}

	return (NULL);
}

/**
 * find_loop_start_free - finds the start node of a loop
 * @head: pointer to the head of the list
 * @meet: meeting point from Floyd's algorithm
 *
 * Return: pointer to the start of the loop
 */
listint_t *find_loop_start_free(listint_t *head, listint_t *meet)
{
	listint_t *slow = head;
	listint_t *fast = meet;

	if (meet == NULL)
		return (NULL);

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}

/**
 * free_normal_list - frees a normal list (no loop)
 * @h: pointer to the head pointer
 *
 * Return: number of nodes freed
 */
size_t free_normal_list(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	return (count);
}

/**
 * free_looped_list - frees a list with a loop
 * @h: pointer to the head pointer
 * @loop_start: pointer to the start of the loop
 *
 * Return: number of nodes freed
 */
size_t free_looped_list(listint_t **h, listint_t *loop_start)
{
	listint_t *temp;
	size_t count = 0;

	/* Free nodes before the loop */
	while (*h != loop_start)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	/* Free nodes inside the loop */
	while ((*h)->next != loop_start)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	/* Free the last node */
	free(*h);
	*h = NULL;
	count++;

	return (count);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to the head pointer of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *meet;
	listint_t *loop_start;

	if (h == NULL || *h == NULL)
		return (0);

	meet = detect_loop_free(*h);

	if (meet == NULL)
		return (free_normal_list(h));

	loop_start = find_loop_start_free(*h, meet);
	return (free_looped_list(h, loop_start));
}
