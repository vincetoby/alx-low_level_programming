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
	tempo->str = _strdup(str);
	while (str[counter] != '\0')
		counter++;
	tempo->len = counter;
	tempo->next = *head;
	*head = tempo;
	return (tempo);
}

/**
 * *_strdup - returns a pointer to allocated space in memory
 * @str: string arg
 * Return: pointer
 */

char *_strdup(const char *str)
{
	int i, j, count = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	ptr = malloc(sizeof(char) * count + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j]; /* copy contents of str into ptr */
	}
	ptr[j] = '\0'; /* terminate with a null byte */
	return (ptr);
}
