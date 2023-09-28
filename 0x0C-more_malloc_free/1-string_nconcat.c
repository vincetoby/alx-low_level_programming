#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: Second string
 * @n: number of s2 to concatenate
 * Return: pointer to new area in memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, length = 0, j;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length] != '\0')
		length++;
	size = (length + n) * sizeof(*s);
	s = malloc(size + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
