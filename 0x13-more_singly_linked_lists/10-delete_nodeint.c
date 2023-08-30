#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list
 * @head: double pointer to linked list
 * @index: node point to delete
 * Return: 1 0n success, -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int nodes = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (nodes == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		nodes++;
	}
	return (-1);
}
