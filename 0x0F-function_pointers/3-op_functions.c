#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of 2 numbers
 * @a:  1st numb
 * @b:  2nd numb
 *
 * Return:  sum of a ,  b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns  difference of 2 numbs
 * @a: 1st numb
 * @b: 2nd numb
 *
 * Return: difference of a , b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns themult  of 2 numbs
 * @a: 1st numb
 * @b: 2nd numb
 *
 * Return: mult of a , b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  division of 2 numbs
 * @a: 1st numb
 * @b: 2nd numb
 *
 * Return: quotient of a , b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - rem of division of 2 numb
 * @a: 1st numb
 * @b: 2nd numb
 *
 * Return: rem of  division of a/ b.
 */
int op_mod(int a, int b)
{
		return (a % b);
}
