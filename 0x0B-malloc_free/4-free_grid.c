#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocated for the 2D array
 * @grid: 2D array
 * @height: height of the grid
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
