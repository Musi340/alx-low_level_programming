#include "holberton.h"
/**
 * reverse_array- reverses the integers in an array
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;
	int temp;

	j = n - 1;
	for (i = 0; i < j; j--, i++)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}
}
