#include <stdio.h>
#include "lists.h"

void _main(void) __attribute__((constructor));

/**
 * _main - function with constructor
 * Description: print string
 * Return: void
 */

void test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
