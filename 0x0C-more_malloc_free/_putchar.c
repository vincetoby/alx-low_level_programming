#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints
 * @c: character to print
 * Return: 1 on error, 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
