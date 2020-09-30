#include <stdio.h>
/**
 * print_array - prints elements in an array
 * @a: The array to be printed
 * @n:number of elements to be printed in the array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		printf("%d", a[i]);
	}
	printf("\n");
}
