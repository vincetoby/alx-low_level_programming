#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to linked list
 * @str: string pointer
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	list_t *tempo;

	tempo = malloc(sizeof(list_t));
	if (tempo == NULL)
		return (NULL);
	tempo->str = strdup(str);
	while (str[counter] != '\0')
		counter++;
	tempo->len = counter;
	tempo->next = *head;
	*head = tempo;
	return (tempo);
}
