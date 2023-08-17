#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * c = char, i = int, f = float, s = char * (if null print (nil)
 * @format: list of types of argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list var;
	int n = 0, i = 0;
	char *separator = ", ";
	char *string;

	va_start(var, format);
	while (format && format[n])
		n++;
	/* while format is not empty and format at index n is not NULL */
	/* n gets the number of element in format */
	while (format && format[i])
	{
		if (i == (n - 1)) /* if i = the last element(n - 1) */
			separator = "";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(var, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(var, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(var, double), separator);
			break;
		case 's':
			string = va_arg(var, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", string, separator);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(var);
}
