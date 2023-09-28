#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int sum;
	int even = 2;
	int lim = 4000000;

	while (sum <= lim)
	{
		sum = a + b;
		if (sum % 2 == 0)
			even = even + sum;
		a = b;
		b = sum;
	}
	printf("%d\n", even);
	return (0);
}
