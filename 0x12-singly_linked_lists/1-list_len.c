#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: constant pointer
 * Return: count
 */

size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
