#include <stdio.h>
#include "main.h"

/**
 * main - prints argoments it receives
 * @argc: number of command, arguments
 * @argv: array of command, arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
