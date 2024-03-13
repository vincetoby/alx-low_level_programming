#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  * of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  * Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jumper, stepper;

	if (array == NULL || size == 0)
		return (-1);

	stepper = sqrt(size);
	for (i = jumper = 0; jumper < size && array[jumper] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jumper, array[jumper]);
		i = jumper;
		jumper += stepper;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jumper);

	jumper = jumper < size - 1 ? jumper : size - 1;
	for (; i < jumper && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
