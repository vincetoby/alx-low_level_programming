#include "lists.h"

/**
 * free_listint22 - Frees a linked  list
 * @head: double Pointer to linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /*temporary pointer to keep track of the next node*/

	if (*head == NULL)
		return;

	while (*head != NULL)/* Loop while there are nodes remaining in the list*/
	{
		temp = *head->next; /*Store the next node in the temporary pointer*/
		free(*head); /* free memory for the current node*/
		*head = temp; /* head copies address of next node stored in temp*/
				/* so now head points to next node on the list */
	}
	*head = NULL;
}
