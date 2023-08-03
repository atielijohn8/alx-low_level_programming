#include "main.h"

/**
 * flip_bits - func that returns number of bits needed
 * flip to get from one number to another
 * @n: one.
 * @m: two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}

	return (numbits);
}
