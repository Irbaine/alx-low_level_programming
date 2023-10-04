#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: returns a pointer to a 2D array or Null
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		ptr[i] = (int *)malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
