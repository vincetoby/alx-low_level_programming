#include "shell.h"

/**
 * _strcspn - gets count of the first elements in str that is not in set
 * @str: input string
 * @set: set of characters to search for
 * Return: count of the first set of elements not found in str
 */

size_t _strcspn(const char *str, const char *set)
{
	size_t count = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; set[j] != '\0'; j++)
		{
			if (str[i] == set[j])
			{
				return (count);
			}
		}
		count++;
	}
	return (count);
}
