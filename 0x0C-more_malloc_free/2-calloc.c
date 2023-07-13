#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function creting memory of array using malloc
 * @s: memory chank  to be filled
 * @b: char tobe copied
 * @n: number of times to itterate b
 * Return: pointer to memory area of  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory of  an arra.y
 * @nmemb: elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory
 *         NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
