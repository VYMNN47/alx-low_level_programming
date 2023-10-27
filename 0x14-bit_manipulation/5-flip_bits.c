#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, ert = 0;

	while (xor)
	{
		if (xor & 1ul)
			ert++;
		xor = xor >> 1;
	}
	return (ert);
}
