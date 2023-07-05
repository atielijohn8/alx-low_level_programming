#include "main.h"
/**
 * a program that prints strings
 * followed by a new line
 * @s:input
 * Return 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
