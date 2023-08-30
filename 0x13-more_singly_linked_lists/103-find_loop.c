#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to linked list
 *
 * Return: Address of the node where loop starts
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast) /*loop detected*/
		{
			slow = head; /*reinitialize slow to head*/
			while (fast != slow) /*fast and slow goes one pace each till they meet*/
			{			/*this part discovers beginning of the loop */
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
	}
	return (NULL); /*If no loop is detected, return NULL*/
}
