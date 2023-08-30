#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to linked list
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head != NULL && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
