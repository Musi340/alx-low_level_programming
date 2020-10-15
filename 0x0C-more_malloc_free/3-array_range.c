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
	int myarray;

	if  (min > max)
		return (0);
	myarray = (max - min) + 1;
	ptr = malloc(myarray * sizeof (int));
	if (ptr == 0)
	return (0);
	for (i = 0, k = min; i < myarray; i++, k++)
	{
		ptr[i] = k;
	}
	return (ptr);
}
