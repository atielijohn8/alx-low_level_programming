#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of command, arguments
 * @argv: array of command, arguments
 *
 * Return:0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
