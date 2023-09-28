#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int swap, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		swap = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = swap;
		start++;
		end--;
	}
}
