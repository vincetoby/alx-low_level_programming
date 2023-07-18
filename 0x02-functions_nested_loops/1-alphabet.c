/*
 * File: 1-alphabet.c
 * Auth: Vincent Ekechukwu
 */

#include "main.h"

/**
 * main - Entry point
 *
 * return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
			c++;
	}
	putchar('\n');
}
