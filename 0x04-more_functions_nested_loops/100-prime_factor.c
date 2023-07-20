#include <stdio.h>
#include <main.h>

/**
 * main - Find and print the largest prime factor of the number
 *
 * Return: 0
 */

int main(void)
{
	int c;
	long numb = 612852475143;

	for (c = (int) sqrt(numb); c > 2; c++)
	{
		if (numb % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
