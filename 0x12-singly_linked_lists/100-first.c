#include <stdio.h>
#include "lists.h"

void _main_t(void) __attribute__((constructor));

/**
 * _main_t - function with constructor
 * Description: print string
 * Return: void
 */

void _main_t(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
