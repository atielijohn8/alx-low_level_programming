#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers,new line
 * @argc: argument number passed to the program
 * @argv: pointers of array to the program
 * Return: 0 (Success) and  1+ (error)
 */
int main(int argc, char *argv[])
{
	int numb, digit, sum = 0;

	for (numb = 1; numb < argc; numb++)
	{
		for (digit = 0; argv[numb][digit]; digit++)
		{
			if (argv[numb][digit] < '0' || argv[numb][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[numb]);
	}

	printf("%d\n", sum);

	return (0);
}
