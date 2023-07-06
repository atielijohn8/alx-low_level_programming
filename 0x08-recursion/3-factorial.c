#include "main.h"
/**
 * factorial - returns factorial number
 * @n: number returns in factorial form
 *
 * Return : the factorial number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
