/*
 * File: 1-alphabet.c
 * Auth: Vincent Ekechukwu
 */

#include "main.h"

/**
 * main - prints alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
