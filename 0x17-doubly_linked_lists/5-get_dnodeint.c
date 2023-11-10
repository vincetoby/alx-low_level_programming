#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of list
 * @head: Pointer to first node
 * @index: The nth node
 * Return: The nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
