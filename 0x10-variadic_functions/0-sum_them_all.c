#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that  Returns the sum of all its paramters.
 * @n: The number of paramters in to the function.
 * @...:  variable number  to calculate the sum of.
 *
 * Return:  n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(argsum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argsum, int);

	va_end(argsum);

	return (sum);
}
