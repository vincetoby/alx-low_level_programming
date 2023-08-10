#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of second string to use
 * Return: pointer to a newly allocated space in memory
 * NULL, If function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, count, count1 = 0, count2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (j = 0; s2[j] != '\0'; j++)
	{
		count2++;
	}
	if (n >= count2)
		n = count2;
	count = count1 + n;
	s = malloc(sizeof(char) * count + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		s[count1 + j] = s2[j];
	s[count1 + j] = '\0';
	return (s);
}


