#include "main.h"

/**
 * clear_bit - func that sets the vlaue of a bit to zero
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 ( success), -1 (failure.)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}

	byte = 1 << index;

	if (*n & byte)
	{
		*n ^= byte;
	}

	return (1);
}
