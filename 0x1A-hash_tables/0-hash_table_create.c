#include "hash_tables.h"

/**
 * hash_table_create - func that creates a hash table.
 * @size: size of array
 * Return: pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*declare pointer for hash_table and array*/
	hash_table_t *ht = NULL;
	hash_node_t **ha = NULL;

	/*allocate mem with calloc*/
	/*calloc does automatic initializations*/
	ha = calloc(size, sizeof(char *));
	if (ha == NULL) /*calloc failure*/
	{
		free(ha);
		return (NULL);
	}
	/*mem alloc*/
	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)/*calloc failure*/
		return (NULL);

	ht->size = size;
	ht->array = ha;
	return (ht);
}
