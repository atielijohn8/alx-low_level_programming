#ifndef CALC_H
#define CALC_H
/**
 * struct op - A struct op rep 2 operators.
 * @op: operator.
 * @f:  associated func that perform operation.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 * op_add -  addition of two numbers.
 * @a: 1st numb
 * @b: 2nd numb
 * Return: sum
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
