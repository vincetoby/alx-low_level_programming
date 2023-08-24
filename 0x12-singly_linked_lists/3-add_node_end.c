#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: a double pointer
 * @str: string arg
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0, i;
	list_t *end_node, *cur;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		end_node->str = NULL;
		end_node->len = 0;
	}
	else
	{
		end_node->str = _strdup(str);
		for (i = 0; str[i] != '\0'; i++)
			count++;
		end_node->len = count;
	}
	end_node->next = NULL;
	if (*head)
	{
	cur = *head;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
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
