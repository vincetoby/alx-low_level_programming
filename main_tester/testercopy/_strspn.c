#include "shell.h"

/**
 * _strspn - checks num of elem in str that matches element in set
 * @str: main string to check
 * @set: string to check too
 * Return: count
 */

size_t _strspn(const char *str, const char *set)
{
	size_t count = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		bool found = false;
		for (j = 0; set[j] != '\0'; j++)
		{
			if (str[i] == set[j])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			/*Character not found in set, stop counting*/
			break;
		}
		count++;
	}
	return (count);
}
