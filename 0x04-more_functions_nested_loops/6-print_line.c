#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n: param 1
 * Return: void
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
