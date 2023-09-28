#include "main.h"

/**
 * get_bit - return value of specified bit
 * @n: unsigned L int
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);

}
