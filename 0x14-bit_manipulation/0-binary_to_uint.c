#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned integer.
 * @b: binary number
 * Return: unsigned integer
 */
 
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_integer;
	int len, base2;

	if (!b)
	{
		return (0);
	}

	unsigned_integer = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unsigned_integer += base2;
		}
	}

	return (unsigned_integer);
}