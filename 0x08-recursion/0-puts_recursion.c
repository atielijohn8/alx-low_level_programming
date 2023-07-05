#include "main.h"
/**
 * a program that prints a string.
 * followed by a new line.
 * @s: input
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts _recursion(s + !);
	}
	
	else

		_putchar('\n');
}
