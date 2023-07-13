#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function allocating memory space using malloc
 * @b: No. of bytes to be allocated
 * Return: pointer to allocated memory
 *         malloc if it fails, terminate the process with status value (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
