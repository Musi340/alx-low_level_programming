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
	int k;

	if  (min > max)
		return (0);
	ptr = malloc(((max - min) + 2) * sizeof (int));
	if (ptr == 0)
	return (0);
	for (i = 0, k = min; i <= (max - min); i++, k++)
	{
		ptr[i] = k;
	}
	ptr[i] = '\0';
	return (ptr);
}
