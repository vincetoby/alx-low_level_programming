#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to check
 * @index: position to change
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8; /*check bit size*/

	if (index >= size)
		return (-1);

	/*n is automatically converted to its binary form*/
	/*bitwise leftshift pushes the 1 in binary value of 1 to index positin*/
	/*bitwise tilde ~ then inverts digit, from 1 to 0*/
	/*then bitwise AND does Multiplication, 1 * 0 is 0, 0 * 0 is 0*/
	/*either way, the value at that index becomes 0*/
	*n = *n & ~(1 << index);
	return (1);
}

