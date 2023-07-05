#include "main.h"
/**
 * a program that prints strings
 * in reverse order
 * @s: print string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
