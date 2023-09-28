#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size of elements in bytes
 * Return: Pointer to new memory, NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			mem[i] = 0;
		return (mem);
	}
	else
		return (NULL);
}
