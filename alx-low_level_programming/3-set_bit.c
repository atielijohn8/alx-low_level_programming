#include "main.h"

/**
 * set_bit - func setting the value of a given bit to 1
 * @n: unsigned long int *
 * @index: bit index
 * Return: 1 ( success) ,-1(failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
		return (-1);

	byte = 1 << index;
	*n = (*n | byte);

	return (1);
}
