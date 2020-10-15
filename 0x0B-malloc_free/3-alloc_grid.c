#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int j;
	int m;
	int **ptr;
	int k;

	if (width == 0 || height == 0)
	return (0);
	ptr = malloc(height * sizeof(int));
	if (ptr == 0)
	return (0);
	for (j = 0; j < height; j++)
	{
		ptr[j] = malloc(width * sizeof(int));
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
			ptr[k][m] = 0;
	}
	return (ptr);
}
