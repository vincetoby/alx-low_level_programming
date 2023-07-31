#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to string
 * @b: constant byte
 * @n: number of byte to fill
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (s);
}
