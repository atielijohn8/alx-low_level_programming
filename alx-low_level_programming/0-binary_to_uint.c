#include "main.h"

/**
 * binary_to_uint - changes binary string to unsigned.
 * int value
 * @b: binary number of string
 * Return: unsigned integer rep of binary num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int length, base;

	if (!b)
	{
		return (0);
	}

	unsigned_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base = 1; length >= 0; length--, base *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsigned_int += base2;
		}
	}

	return (unsigned_int);
}
