#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: first integer
 * @b: second integer
 * Return: difference of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: product of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: result of the division of the numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets remainder of the division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: remainder of division of the 2 numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
