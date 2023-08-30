#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: Pointer to linked list
 * Return: Size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *temp;

	while (*h != NULL && *h > (*h)->next)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		nodes++;
	}
	if (*h)
	{
		free(*h);
		nodes++;
	}
	*h = NULL;
	return (nodes);
}
