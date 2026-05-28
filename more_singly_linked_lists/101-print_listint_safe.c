#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * (handles lists with loops)
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast, *loop_start;
	size_t count = 0;
	int loop_detected = 0;

	if (head == NULL)
		return (0);

	/* Detect if there's a loop using Floyd's algorithm */
	slow = head;
	fast = head;

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

	/* If no loop, print normally */
	if (!loop_detected)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
		return (count);
	}

	/* Find the start of the loop */
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	loop_start = slow;

	/* Print nodes before the loop */
	slow = head;
	while (slow != loop_start)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	/* Print nodes inside the loop (once) */
	slow = loop_start;
	do {
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	} while (slow != loop_start);

	/* Print the loop indicator */
	printf("-> [%p] %d\n", (void *)slow, slow->n);

	return (count);
}
