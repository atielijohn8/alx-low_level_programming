#include "main.h"

/**
 * char *_strcpy - copies  string pointed to by src
 * @dest: check destinatination where string is copied
 * @src: points source string
 * Return: string destination
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int y = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; y < k ; y++)
	{
		dest[y] = src[y];
	}
	dest[k] = '\0';
	return (dest);
}
