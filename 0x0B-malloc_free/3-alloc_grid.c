#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for 2D array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the 2D array or NULL if failed or width/heigh is 0 or -
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
