#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum;
	int i;

	printf("%lu, ", a);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", b);
		sum = a + b;
		a = b;
		b = sum;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
