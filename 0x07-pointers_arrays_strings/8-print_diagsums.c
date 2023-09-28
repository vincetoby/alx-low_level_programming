#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumdiag1 = 0, sumdiag2 = 0, stp1, stp2;

	for (i = 0; i <= (size - 1); i++)
	{
		stp1 =  (size + 1) * i;
		sumdiag1 = sumdiag1 + *(a + stp1);
	}

	for (j = 1; j <= size; j++)
	{
		stp2 = (size - 1) * j;
		sumdiag2 = sumdiag2 + *(a + stp2);
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
