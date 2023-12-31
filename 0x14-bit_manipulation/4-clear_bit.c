#include "main.h"

/**
 * clear_bit - sets bit value to 1 for specified index to zero
 * @n: uns L int ptr
 * @index: bit index
 * Return: 1 (success) -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
	{
		return (-1);
	}

	j = 1 << index;

	if (*n & j)
	{
		*n ^= j;
	}

	return (1);
}
