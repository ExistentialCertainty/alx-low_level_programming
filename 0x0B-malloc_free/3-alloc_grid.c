#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 * a two dimensional array of integers.
 * @width: argument for width of array
 * @height: argument for height of array
 *
 * Return: pointer to two dimensional array on success
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);
		if (ptr[row] == NULL)
		{
			for ( ; row >= 0; row--)
			{
				free(ptr[row]);
			}
			free(ptr);
			return ('\0');
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			ptr[row][column] = 0;
		}
	}
	return (ptr);
}
