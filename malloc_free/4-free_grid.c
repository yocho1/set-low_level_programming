#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the grid (2D array)
 * @height: height of the grid (number of rows)
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if grid is NULL to avoid segfault */
	if (grid == NULL)
		return;

	/* Free each row (the columns) */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the array of row pointers */
	free(grid);
}
