#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 * Return: void.
 */

void puts_half(char *str)
{
	int i; /* string index */
	int counter; /* holding length of string */
	int n; /* holding the last characters */

	counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	n = (counter - 1) / 2; /* this calculation gives the last characters */
	for (i = n + 1; str[i] != '\0'; i++) /* n + 1 ensures it starts after half */
		_putchar(str[i]);
	_putchar('\n');
}
