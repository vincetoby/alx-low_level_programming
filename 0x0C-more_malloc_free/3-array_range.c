#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *mem;
	int i, j = 0;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(int) * ((max - min) + 1));
	if (mem != NULL)
	{
		for (i = min; i <= max; i++)
		{
			mem[j] = i;
			j++;
		}
		return (mem);
	}
	else
		return (NULL);

}
