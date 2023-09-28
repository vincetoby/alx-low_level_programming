#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of liinked list
 * @head: double pointer to linked list
 * @n: new data to add
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* temp is a new pointer that transverses the existing nodes*/
	/* head points to the existing nodes*/
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (temp->next != NULL) /*trying to get the last node which ends in NULL*/
		temp = temp->next; /*old keeps upadting to till gets address of last node*/
	temp->next = newnode; /* last node's link section then copies adress of new*/
	return (newnode);
}
