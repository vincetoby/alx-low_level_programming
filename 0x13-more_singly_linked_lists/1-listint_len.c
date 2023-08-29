#include "lists.h"

/**
 * listint_len - counts the number of nodes
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
