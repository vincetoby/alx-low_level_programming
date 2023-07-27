#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @a: strings to encode
 * Return: char
 */

char *leet(char *a)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *t = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s[j])
			{
				a[i] = t[j];
			}
		}
	}
	return (a);
}
