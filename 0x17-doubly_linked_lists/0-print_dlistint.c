#include "lists.h"

/**
 * print_dlistint - prints all elements in a linked dlistint_t list
 * @h: head pointer
 * Return: length of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
