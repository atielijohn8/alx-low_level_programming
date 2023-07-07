#include <stdio.h>
#include "main.h"

/**
 * main - program that prints it's name ,new line
 * @argc: number of command arguments
 * @argv: array of command arguments
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
