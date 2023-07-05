#include "main.h"
/**
 * a program that prints sring in a reverse form
 * @s:print the string.
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s+1);
		_pitchar(*s);
	}
}:
