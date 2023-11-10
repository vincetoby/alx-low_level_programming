#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - it generates a key depending on a username for crackme5
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	unsigned int i, beta;
	size_t len, adder;
	char *lis = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char m[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	m[0] = lis[(len ^ 59) & 63];
	for (i = 0, adder = 0; i < len; i++)
		adder = adder + argv[1][i];
	m[1] = lis[(adder ^ 79) & 63];
	for (i = 0, beta = 1; i < len; i++)
		beta = beta * argv[1][i];
	m[2] = lis[(beta ^ 85) & 63];
	for (beta = argv[1][0], i = 0; i < len; i++)
		if ((char)beta <= argv[1][i])
			beta = argv[1][i];
	srand(beta ^ 14);
	m[3] = lis[rand() & 63];
	for (beta = 0, i = 0; i < len; i++)
		beta = beta + argv[1][i] * argv[1][i];
	m[4] = lis[(beta ^ 239) & 63];
	for (beta = 0, i = 0; (char)i < argv[1][0]; i++)
		beta = rand();
	m[5] = lis[(beta ^ 229) & 63];
	printf("%s\n", m);
	return (0);
}
