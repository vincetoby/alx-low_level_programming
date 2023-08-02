#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string to be checked
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
