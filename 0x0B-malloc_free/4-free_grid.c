#include "main.h"

/**
 * free_grid - fres a 2 d array
 * @grid:memory block to be freed
 * @height:height of array
 * Returns:returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
