#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (!h->n)
			printf("NULL\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
