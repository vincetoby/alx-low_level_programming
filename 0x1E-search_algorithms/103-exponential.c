#include "search_algos.h"

/**
  * b_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @lt: The first index of the [sub]array to search.
  * @rt: The last index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value absent or NULL, -1.
  * Otherwise, the index where the value is located.
  */

int b_search(int *array, size_t lt, size_t rt, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (rt >= lt)
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

/**
  * exponential_search - Searches for a value in a sorted array
  * of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to be searched for
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, rt;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	rt = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, rt);
	return (b_search(array, i / 2, rt, value));
}
