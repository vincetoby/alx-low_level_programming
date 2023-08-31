#include "main.h"

/**
 * int flip_bits - retiurns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitdigits;
	unsigned int count = 0;

	/*bitwise XOR unlike OR, adds similar bit to give zero*/
	/*1+1= 0, 0+0=0*, therefore, result that is 1 means the presence of*/
	/*unsimilar bits. 1+0= 1*/
	/*n and m are automatically converted to binary in the presence of bitwise*/
	/*XOR operation(^), gets the unsimilar digits, represented by 1*/
	bitdigits = n ^ m;

	while (bitdigits != 0)
	{
		if ((bitdigits & 1) == 1)/*check if least significant bit is set(1)*/
			count++;
		bitdigits = bitdigits >> 1; /*it rightshifts by 1 till bitdigits is 0*/
	}
	return (count);
}
