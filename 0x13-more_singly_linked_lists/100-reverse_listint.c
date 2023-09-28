#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *nextt = NULL;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	while (current != NULL)
	{
		nextt = current->next;	/* Save the next node */
		current->next = prev;	/*Reverse the current node's next pointer*/
		prev = current;		/*Move prev to the current node*/
		current = nextt;	/* Move current to the next node*/
	}
	*head = prev;  /*Update the head to point to the new first node*/
	return (*head);
}

