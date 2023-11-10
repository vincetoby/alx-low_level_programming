#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at certain indx
 * @head: Pointer to 1st node
 * @index: The point for node deletion
 * Return: 1 in success or -1 in failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *res = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = res->next;
		if (res->next == NULL)
			return (-1);
		res->next->prev = NULL;
		free(res);
		return (1);
	}
	while (count < index)
	{
		if (res->next == NULL)
			return (-1);
		res = res->next;
		count++;
	}
	res->prev->next = res->next;
	if (res->next)
		res->next->prev = res->prev;
	if (res->next == NULL)
	{
		p = res->prev;
		p->next = NULL;
		free(res);
		return (1);
	}
	free(res);
	return (1);
}
