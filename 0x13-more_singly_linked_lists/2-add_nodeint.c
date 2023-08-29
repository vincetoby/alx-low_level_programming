#include "lists.h"
/**
 * add_nodeint - add new node to the beginning
 * @head: double pointer to address of first node
 * @n: constant var holding data to add
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
