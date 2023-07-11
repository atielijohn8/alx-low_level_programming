#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that links all arguments
 * @ac: pointer to dimensial grid
 * @av: height
 * Return: pointer to new string, Null if negative
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[x] = av[i][j];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}
