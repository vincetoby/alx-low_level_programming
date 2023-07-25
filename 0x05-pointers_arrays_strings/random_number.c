#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 10 random numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		srand(time(NULL));
		printf("%d \n", rand());
	}
	return (0);
}
