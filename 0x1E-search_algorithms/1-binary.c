#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * of integers using binary search algorithm
  * @array: pointer to array to search.
  * @size: size of array.
  * @value: The value to search.
  * Return: If not found -1, else index of value
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (i = lt; i < rt; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lt + (rt - lt) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rt = i - 1;
		else
			lt = i + 1;
	}

	return (-1);
}
