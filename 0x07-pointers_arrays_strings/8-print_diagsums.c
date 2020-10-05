#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: the matrix
* @size: size of the matrix
*
*/
void print_diagsums(int *a, int size)
{
	int sum;
	int i;

	for (i = 0; i < size ; i++)
	{
		sum = sum + a[i];
	}
	printf("%d", sum);
	printf("\n");
}
