#include "main.h"
/**
 * _memset - fill achank of memory with values
 * @s: starting addreses of memory to be filled
 * @b: define the value
 * @n: number of bytes to be changed
 *
 * Return: modify an array replacing elements
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
