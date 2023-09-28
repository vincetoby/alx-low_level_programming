#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to linked list
 * @idx: position at which new node should be
 * @n: new node data
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head; /*temp copies the head and used to tranverse nodes*/
	unsigned int nodes = 0;

	newnode =  malloc(sizeof(listint_t)); /*reserve space for newnode*/
	if (newnode == NULL)
		return (NULL);

	newnode->n = n; /*copy required data into data section of newnode*/

	/*what to do if newnode is to be put at the beginning of linked list*/
	if (idx == 0)
	{
		newnode->next = *head; /*newnode copies addr of firstnode*/
		*head = newnode; /*pointer to firstnode copies address of newnode*/
		return (newnode);
	}

	/*if idx is  not 0, then check if temp is NULL*/
	while (temp != NULL)
	{
		if (nodes == idx - 1) /*making sure to fix newnode be4 idx*/
		{
			newnode->next = temp->next; /*newnode copies address of next node*/
			temp->next = newnode; /*current node copies address of newnode*/
			return (newnode);
		}
		temp = temp->next;
		nodes++;
	}
	return (NULL);
}

