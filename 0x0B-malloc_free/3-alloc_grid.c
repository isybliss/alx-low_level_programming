#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional arrays of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, f;
	int **alloc_mem_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_mem_grid = malloc(sizeof(int *) * height);

	if (alloc_mem_grid == NULL)
	{
		free(alloc_mem_grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem_grid[i] = malloc(sizeof(int) * width);

		if (alloc_mem_grid[i] == NULL)
		{
			for (f = i; f >= 0; f--)
				free(alloc_mem_grid[f]);

			free(alloc_mem_grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			alloc_mem_grid[i][j] = 0;
	}

	return (alloc_mem_grid);
}
