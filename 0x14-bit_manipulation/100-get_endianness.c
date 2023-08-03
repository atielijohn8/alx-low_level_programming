#include "main.h"

/**
 * get_endianness - checks  endianness
 * Return: 0 (big endian), 1 (little endian)
 */

int get_endianness(void)
{
	unsigned int byte;
	char *c;

	byte = 1;
	c = (char *) &byte;

	return ((int)*c);
}
