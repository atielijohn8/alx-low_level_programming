#include "main.h"

int original_prime(int n, int j);

/**
 * is_prime_number - determine if integer is prime number or not
 * @n: number to be evaluated
 *
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (original_prime(n, n - 1));
}

/**
 * original_prime - calculates if a number is prime recursively
 * @n: number to be evaluated
 * @i: loops
 *
 * Return: 1 if n is prime and 0 if not
 */
int original_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (original_prime(n, j - 1));
}
