#include "lists.h"

/**
 * sum_dlistint - Sums the data of list
 * @head: Pointer to 1st node
 * Return: The calculated sum
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
