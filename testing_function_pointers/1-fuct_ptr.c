#include <stdio.h>

/**
 * add - adds two integers
 * subtract - subtracts two ints
 * multiply - multiply two integers
 * @a: first integer
 * @b: second int
 * Return: void
 */

void add(int a, int b)
{
	printf("a + b = %d\n", a + b);
}
void subtract(int a, int b)
{       
        printf("a - b = %d\n", a - b);
}
void multiply(int a, int b)
{
        printf("a x b = %d\n", a * b);
}

/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	void (*all_func_ptr[])(int, int) = {add, subtract, multiply};

	unsigned int i, a = 250, b = 5;

	printf("Enter choice: 0 for add, 1 for subtract, 2 for multiply\n");
	scanf("%d", &i);

	if (i > 2)
	{
		return (0);
	}

	(*all_func_ptr[i])(a, b);
	return (0);
}
