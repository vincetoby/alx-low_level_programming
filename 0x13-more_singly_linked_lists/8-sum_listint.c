#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of alinked list
 * @head: pointer to linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0, data;
	listint_t *temp;

	while (head != NULL)
	{
		data = head->n;
		temp = head->next;
		sum = sum + data;
		head = temp;
	}
	return (sum);
}

