#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a two dimensional
 * grid previously created by your alloc_grid function
 * @grid: 2d grid
 * @height: second argument for height
 * Return: none
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
