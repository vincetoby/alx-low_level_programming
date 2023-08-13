#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_check - checks if string contains only digits
 * @s: string to check
 * Return: 1 if character is found,
 * or num, if only digits.
 */

int num_check(char *s)
{
	int i, len, num = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		else
			num = num * 10 + (s[i] + '0');
	}
	return (num);
}

/**
 * main - multiplies two strings
 * @argc: argument count
 * @argv: argument vector
 * Return: result of multiplication
 * Error, otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	a = num_check(argv[1]);
	b = num_check(argv[2]);

	if (a == 1 || b == 1)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		/* atoi converts char to int */
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
