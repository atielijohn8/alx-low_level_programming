#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - func which Prints the result of simple operations.
 * @argc:  numb of arg  to the program.
 * @argv: array of pointers to the arg
 *
 * Return: 0 (succsess)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
