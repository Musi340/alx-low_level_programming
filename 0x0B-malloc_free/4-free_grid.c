#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid: pointer to the 2D array
 * @height: height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
