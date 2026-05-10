#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of the grid (number of columns)
 * @height: height of the grid (number of rows)
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (array of pointers) */
	grid = malloc(height * sizeof(int *));

	/* If malloc fails, return NULL */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row (columns) */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/* If malloc fails, free everything allocated so far */
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows */
			for (j = 0; j < i; j++)
				free(grid[j]);
			/* Free the row pointers */
			free(grid);
			return (NULL);
		}

		/* Initialize all elements in this row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
