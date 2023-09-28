#include "main.h"

/**
 * flip_bits - returns numbb of bits needed for flip to next numbb
 * @n: numbb one.
 * @m: numbb two.
 * Return: numbb of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numb_of_bits;

	for (numb_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numb_of_bits++;
	}

	return (numb_of_bits);
}
