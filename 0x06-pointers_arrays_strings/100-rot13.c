#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @a: string to encode
 * Return: a
 */

char *rot13(char *a)
{
	int i, j;
	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == x[j])
			{
				a[i] = y[j];
				break;
			}
		}
	}
	return (a);
}
