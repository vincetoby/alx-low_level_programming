#include "main.h"

/**
 * binary_to_uint - converts binary to digits
 * @b: char of binary digits
 * Return: converted number, or 0 if there is
 * one or more chars in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal = decimal << 1;
	}
	return (decimal);
}
