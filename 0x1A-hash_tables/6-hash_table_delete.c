#include "hash_tables.h"

/**
 * hash_table_delete - eletes a hash table.
 * @ht: pointer to hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int indx = 0;
	hash_node_t *ha = NULL, *temp_next = NULL;

	while (indx < ht->size)
	{
		ha = ht->array[indx];
		while (ha)
		{
			temp_next = ha->next;
			free(ha->value);
			free(ha->key);
			free(ha);
			ha = temp_next;
		}
		indx++;
	}
	free(ht->array);
	free(ht);
}
