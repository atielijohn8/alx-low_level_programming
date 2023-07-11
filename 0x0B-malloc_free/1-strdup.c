#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function which points to newly a llocated memory
 * duplicates string of the parameter
 * @str: print character on the screen
 * Return: Null if str is Null, pointer on succsses
 */
char *_strdup(char *str)
{
	char *kennedy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	kennedy = malloc(sizeof(char) * (i + 1));

	if (kennedy == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		kennedy[j] = str[j];

	return (kennedy);
}
