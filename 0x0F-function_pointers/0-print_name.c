#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - func printing  name using pointer to func.
 * @name: string
 * @f: function pointer
 * Return: invalid
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
