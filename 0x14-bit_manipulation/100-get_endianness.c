#include "main.h"

/**
 * get_endianness - return the endianness of the machine
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int num = 1;

	/*Access the first byte of num and return its value as an integer*/
	/*typecast the address of num to a pointer to a character (char *)*/
	/*gives access to indiv bytes of num*/
	/*dereference the typecasted pointer  (*((char *) &n))*/
	/*this gives access to first byte of num regardless of machine's endianness*/
	return (*((char *) &num) + '0');
}
