#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to first node of linked list
 * @index: nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	while (head != NULL)
	{
		if (nodes == index)
		{
			return (head);
		}
		head = head->next;
		nodes++; /* nodes count */
	}
	return (NULL);
}
