#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to linked list
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (data);
}
