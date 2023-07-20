#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of diagonal lines to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		 _putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
