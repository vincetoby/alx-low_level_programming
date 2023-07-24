#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	char j;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter / 2; i++)
	{
		j = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - i - 1] = j;
	}
}
