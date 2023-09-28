#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number to be accessed
 * @index: position to change bit
 * Return: 1 on success or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8; /*check bit size*/

	if (index >= size)
		return (-1);

	/*n is automatically converted to its binary form*/
	/*bitwise leftshift pushes the 1 in binary value of 1 to index positin*/
	/*then bitwise OR does addition, 1 + 1 is 1, 0 + 1 is 1*/
	/*either way, the value at that index becomes 1*/
	*n = *n | 1 << index;
	return (1);
}
