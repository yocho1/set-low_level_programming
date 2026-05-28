#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * detect_loop - detects if a linked list has a loop
 * @head: pointer to the head of the list
 *
 * Return: pointer to meeting point if loop, NULL otherwise
 */
const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

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
 * find_loop_start - finds the start node of a loop
 * @head: pointer to the head of the list
 * @meet: meeting point from Floyd's algorithm
 *
 * Return: pointer to the start of the loop
 */
const listint_t *find_loop_start(const listint_t *head,
				 const listint_t *meet)
{
	const listint_t *slow = head;

	if (meet == NULL)
		return (NULL);

	while (slow != meet)
	{
		slow = slow->next;
		meet = meet->next;
	}

	return (slow);
}

/**
 * print_normal_list - prints a normal list (no loop)
 * @head: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_normal_list(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}

/**
 * print_loop_list - prints a list with a loop
 * @head: pointer to the head of the list
 * @loop_start: pointer to the start of the loop
 *
 * Return: number of nodes printed
 */
size_t print_loop_list(const listint_t *head, const listint_t *loop_start)
{
	const listint_t *current;
	size_t count = 0;

	/* Print nodes before the loop */
	current = head;
	while (current != loop_start)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	/* Print nodes inside the loop (once) */
	do {
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	} while (current != loop_start);

	/* Print the loop indicator */
	printf("-> [%p] %d\n", (void *)current, current->n);

	return (count);
}

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *meet;
	const listint_t *loop_start;

	if (head == NULL)
		return (0);

	meet = detect_loop(head);

	if (meet == NULL)
		return (print_normal_list(head));

	loop_start = find_loop_start(head, meet);
	return (print_loop_list(head, loop_start));
}
