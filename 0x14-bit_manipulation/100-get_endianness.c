#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 (big-endian), 1 ( little- endian)
 */

int get_endianness(void)
{
	unsigned int numb;
	char *ptr;

	numb = 1;
	ptr = (char *) &numb;

	return ((int)*ptr);
}