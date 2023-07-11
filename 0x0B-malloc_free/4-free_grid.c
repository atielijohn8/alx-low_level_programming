#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that creates two dimensional grid
 * pre created by alloc_grid function
 * @grid: pointer to two dimensinal array
 * @height: height of grid
 * Description: function freing space allocated to memory
 * Return: ?
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
