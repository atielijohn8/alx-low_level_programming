#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func which Prints, numbers followed by a new line.
 * @separator: string to be printed in between numbers.
 * @n: integers passed to function.
 * @...: variable number of the numbers, to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printArgs;

	va_start(printArgs, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(printArgs, int));
	}
	va_end(printArgs);
	printf("\n");
}
