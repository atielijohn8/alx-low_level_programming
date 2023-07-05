#include "main.h"

/**
 * a function that returns a given numb.
 * @n: return factorial, form.
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
