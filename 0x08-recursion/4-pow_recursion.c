#include "main.h"
/**
 * _pow_recursion-return the value x^y.
 * @x,y: x raised to power of y
 */
nt _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
