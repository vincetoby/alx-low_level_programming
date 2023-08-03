#include <stdio.h>
#include "main.h"

/**
 * sq2 - checks numbers a starting from a
 * @a: number that is being checked
 * @n: number whose square root is analyzed
 * Return: square root of n or
 * -1 if none is found.
 */

int sq2(int n, int a)
{

	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (sq2(n, a + 1));
}

/**
 * sqr - prints the square root by utizing sqr2
 * @num: the same as n
 * Return: square root or -1
 */

int sqr(int num)
{
	return (sq2(num, 1));
	/* that number 1 represents the first number to check till n */
	/* if i increase the 1 to 11, it prints -1 */
	/* 11 becomes the new lowest/first number to check */
	/* and no number from 11 is sqroot of 100 */
}

/**
 * main - entry point that print sqroot of 100
 *
 * Return: void
 */

int main(void)
{
	int i = sqr(100);

	printf("%d\n", i);
}
