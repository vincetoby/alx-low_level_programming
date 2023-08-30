#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to linked list
 * @idx: position at which to add new node
 * @n: new node data
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int nodes = 0;

	newnode =  malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (temp != NULL)
	{
		if (nodes == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		nodes++;
	}
	return (NULL);
}

