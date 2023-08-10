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
	char *a;
	unsigned int sz, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sz = nmemb * size;
	a = malloc(sz);
	if (a == NULL)
		return (NULL);
	while (i < sz)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
