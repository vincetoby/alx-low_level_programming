#include "hash_tables.h"

/**
 * hash_table_set - add elem to Hash table
 * @ht: pointer to start of table
 * @key: key
 * @value: value of element
 * Return: 1 for success or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *arr = NULL, *node = NULL;
	unsigned long int indx;

	if (!ht || !key || !*key || !value)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	arr = ht->array[indx];

	while (arr)
	{
		if (strcmp(arr->key, key) == 0)
		{
			free(arr->value);
			arr->value = strdup(value);
			return (1);
		}
		arr = arr->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL) /*malloc failure*/
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[indx];
	ht->array[indx] = node;
	return (1);
}
