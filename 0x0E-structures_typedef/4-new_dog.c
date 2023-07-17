#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *ndog;
	char *x, *y;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	x = malloc((len1 + 1) * sizeof(char));
	if (x == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		x[i] = name[i];
	x[i] = '\0';
	ndog->name = x;
	ndog->age = age;
	y = malloc((len2 + 1) * sizeof(char));
	if (y == NULL)
	{
		free(x);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		y[i] = owner[i];
	y[i] = '\0';
	ndog->owner = y;
	return (ndog);
}
