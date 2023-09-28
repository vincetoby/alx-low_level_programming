/*
 * File: 3-print_alphabet.c
 * Auth: Vincent T. Ekechukwu
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
