#include <stdlib.h>
/**
 * array_range - craetes an array of integers
 * @min: starting value
 * @max: last value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if  (min > max)
		return (0);
	ptr = malloc(((max - min) + 1) * sizeof (int));
	if (ptr == 0)
	return (0);
	for (i = 0; i < ((max - min) + 1); i++)
	{
		ptr[i] = min;
		min = min + 1;
	}
	return (ptr);
}
