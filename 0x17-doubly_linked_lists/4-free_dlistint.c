#include "lists.h"

/**
 * free_dlistint - Free the memory in list
 * @head: Pointer to first node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	while (head != NULL)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
