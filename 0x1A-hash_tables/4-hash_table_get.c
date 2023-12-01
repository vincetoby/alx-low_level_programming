#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key
 * @ht: pointer to hash table
 * @key: key of has_table
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ha = NULL;
	unsigned int indx;

	if (ht && key)
	{
		indx = key_index((unsigned char *)key, ht->size);
		ha = ht->array[indx];
		if (ha == NULL)
			return (NULL);
		while (strcmp(ha->key, key) != 0)
			ha = ha->next;
		return (ha->value);
	}
	return (NULL);
}
