#include "main.h"
/**
 * _strlen - function that returns length of the string
 * @s: string to find length
 * Return: string length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
