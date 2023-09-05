#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid  - frees a 2 dimensional grid
 *previously created by your alloc_grid function.
 *@grid: double pointer to a grid (2 D array)
 *@height: number of rows
 *Return: return nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height >= 0)
	{
		int row_index = 0;
	
		while (row_index < 0)
		{
			free(grid[row_index]);
		}
	}
}
