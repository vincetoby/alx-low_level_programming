#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string of that separates each arg
 * @n: number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	const char *separator2;
	va_list var;
	/* var holds the unknown arguments */

	if (separator == NULL)
		separator2 = "";
	else
		separator2 = separator;
	va_start(var, n);
	if (n > 0)
	{
		printf("%d", va_arg(var, int));
	}
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator2, va_arg(var, int));
	}
	printf("\n");
	va_end(var);
}

