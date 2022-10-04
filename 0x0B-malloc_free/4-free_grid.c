#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by alloc_grid function
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;
	
	if (grid != NULL && height != 0)
	{
		for (i = 0; i <= height; i++)
			free(grid[i]);
		free(grid);
	}
}
