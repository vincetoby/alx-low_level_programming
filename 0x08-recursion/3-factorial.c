#include "holberton.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 * Return: if < 0, -1. if = 0, 1.
 * else returns factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
