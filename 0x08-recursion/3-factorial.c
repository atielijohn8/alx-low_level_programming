#include "main.h"
/**
 * factorial - funtion returning factorial number
 * @n: number returns in factorial form
 * Return : factorial n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
