#include "hash_tables.h"

/**
 * hash_table_print - prints the has_table
 * @ht: pointer to hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ha = NULL;
	unsigned int indx = 0, tempo = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (indx < ht->size)
	{
		if (ht->array[indx] == NULL)
		{
			indx++;
			continue;
		}
		if (tempo == 1)
			printf(", ");
		tempo = 1;
		ha = ht->array[indx];
		while (ha)
		{
			printf("'%s': '%s'", ha->key, ha->value);
			if (ha->next != NULL)
				printf(", ");
			ha = ha->next;
		}
		indx++;
	}
	printf("}\n");
}
