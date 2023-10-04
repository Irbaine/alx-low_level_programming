#include "main.h"

/**
 * free_grid - free 2D array
 * @grid: 2D array
 * @height: height of the array
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height < 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	grid = NULL;
}
