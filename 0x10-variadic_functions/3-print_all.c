#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - func that prints white
 * @format: list of in to  arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep, *sep1 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep1, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep1, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep1, va_arg(list, double));
					break;
				case 's':
					sep = va_arg(list, char *);
					if (!sep)
						sep = "(nil)";
					printf("%s%s", sep1, sep);
					break;
				default:
					i++;
					continue;
			}
			sep1 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
