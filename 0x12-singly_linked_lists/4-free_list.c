#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *cur;

	while (head != NULL)
	{
		cur = head->next;
		free(head->str);
		free(head);
		head = cur;
	}
}
