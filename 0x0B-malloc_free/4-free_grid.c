#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid -  free 2 dimensional array
 * @grid: grid array
 * @height: height of array
 *
 * Description: function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(*(grid + j));
	free(grid);
}

