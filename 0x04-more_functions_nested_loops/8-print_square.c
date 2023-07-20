#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the lenght and width of the square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
