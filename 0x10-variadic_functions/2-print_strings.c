#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string of that separates each arg
 * @n: number of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *args;
	char *arg;
	const char *separator2;
	va_list var;
	/* var holds the unknown arguments */

	if (separator == NULL)
		separator2 = "";
	else
		separator2 = separator;
	va_start(var, n);
	arg = va_arg(var, char *);

	if (arg == NULL)
	{
		arg = "(nil)";
	}
	printf("%s", arg);
	/* if n > 0 checks just the first string */

	for (i = 1; i < n; i++)
	{
		args = va_arg(var, char *);
		if (args == NULL)
			args = "(nil)";
		printf("%s%s", separator2, args);
	}
	printf("\n");
	va_end(var);
}
