#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	unsigned int i;

	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		block = malloc(new_size);
		if (block == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)block + i) = *((char *) ptr + i);
			free(ptr);
			return (block);
		}
	}
}
