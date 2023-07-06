#include "main.h"

int original_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - returns,  natural square root of a number
 * @n: number to find the square root of
 *
 * Return: find the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (original_sqrt_recursion(n, 0));
}

/**
 * original_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to find the sqaure root of
 * @j: loops
 *
 * Return: find resulting square root
 */
int original_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (original_sqrt_recursion(n, j + 1));
}
