#include "holberton.h"
/**
* print_chessboard - function that prints a chessboard
* @a: the number of columns
*
*/
void print_chessboard(char (*a)[8])
{
	int j;
	int k;

	for (j = 0; j < 8 ; j++)
	{
	for (k = 0; k < 8 ; k++)
	{
		_putchar(a[j][k]);
	}
	_putchar('\n');
	}
}
