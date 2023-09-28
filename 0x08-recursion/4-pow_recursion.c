#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Integer
 * @y: Power
 * Return: if < 0, -1, if = 0, 1
 * else returns result of x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
