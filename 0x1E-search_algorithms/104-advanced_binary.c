#include "search_algos.h"
/**
  * adv_binary_recursive - Searches recursively for a value in a sorted
  * array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @lt: The starting index of the [sub]array to search.
  * @rt: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is absent, -1.
  *         Otherwise, the index where the value is located.
  */
int adv_binary_recursive(int *array, size_t lt, size_t rt, int value)
{
	size_t i;

	if (rt < lt)
		return (-1);
	printf("Searching in array: ");
	for (i = lt; i < rt; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = lt + (rt - lt) / 2;
	if (array[i] == value && (i == lt || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (adv_binary_recursive(array, lt, i, value));
	return (adv_binary_recursive(array, i + 1, rt, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  * of ints using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not found -1.
  * Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (adv_binary_recursive(array, 0, size - 1, value));
}
