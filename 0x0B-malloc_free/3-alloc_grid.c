#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer that  returns two dimensional array
 * @width: width of chank of memory
 * @height: height of chank of memory
 * Return: pointer to two dimensional array
 *         Null if results come negative
 */
int **alloc_grid(int width, int height)
{
	int **kennedy;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	kennedy = malloc(sizeof(int *) * height);

	if (kennedy == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		kennedy[i] = malloc(sizeof(int) * width);

		if (kennedy[i] == NULL)
		{
			for (; i >= 0; i--)
				free(kennedy[i]);

			free(kennedy);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			kennedy[i][j] = 0;
	}

	return (kennedy);
}
