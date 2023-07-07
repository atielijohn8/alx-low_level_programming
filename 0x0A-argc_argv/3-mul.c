#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument number supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 (Success) and 1 (error)
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	ans = numb1 * numb2;

	printf("%d\n", ans);

	return (0);
}
