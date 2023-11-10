#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at nth postion
 * @h: Points to first node
 * @n: The data
 * @idx: Position to insert the new node
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *res = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (res == NULL)
			return (NULL);
		res = res->next;
	}

	if (res->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = res->next;
	new->prev = res;
	res->next->prev = new;
	res->next = new;

	return (new);
}
