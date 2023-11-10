#include "lists.h"

/**
 * dlistint_len: prints length of list
 * @h: head
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
