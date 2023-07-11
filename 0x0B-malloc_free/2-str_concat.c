#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that links to pointers
 * @s1: input to first linking
 * @s2: input to second linking
 * Return: pointer that links s1 nad s2
 */
char *str_concat(char *s1, char *s2)
{
	char *link;
	int j, cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = cj = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[cj] != '\0')
		cj++;
	link = malloc(sizeof(char) * (j + cj + 1));

	if (link == NULL)
		return (NULL);
	j = cj = 0;
	while (s1[j] != '\0')
	{
		link[j] = s1[j];
		j++;
	}

	while (s2[cj] != '\0')
	{
		link[j] = s2[cj];
		j++, cj++;
	}
	link[j] = '\0';
	return (link);
}
