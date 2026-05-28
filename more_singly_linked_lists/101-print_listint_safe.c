#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * detect_loop - detects if a linked list has a loop
 * @head: pointer to the head of the list
 *
 * Return: 1 if loop detected, 0 otherwise
 */
int detect_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}

	return (0);
}

/**
 * print_loop_list - prints a list with a loop
 * @head: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_loop_list(const listint_t *head)
{
	const listint_t *slow = head;
	size_t count = 0;

	while (count == 0 || slow != head)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	printf("-> [%p] %d\n", (void *)slow, slow->n);
	return (count);
}

/**
 * print_normal_list - prints a normal list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes
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
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	if (detect_loop(head))
		return (print_loop_list(head));

	return (print_normal_list(head));
}
