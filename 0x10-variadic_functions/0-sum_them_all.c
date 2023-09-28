#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: variadic inputs
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list var;
	/* va_list declared the variable var */
	/* var holds the unknown elements represented by ellpsis(...) */
	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(var, const unsigned int);
	}
	va_end(var);
	/* va_start initializes the args and va_end represent the ending */
	return (sum);
}
