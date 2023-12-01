#include "hash_tables.h"

/**
 * key_index - func gives the index of a key
 * @key: key of hash_table
 * @size: size of array of the hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
