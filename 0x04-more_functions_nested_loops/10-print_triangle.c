#include "holberton.h"
/**
* print_triangle - prints #
*@size: number of times to print
*
*/
void print_triangle(int size)
{
	int y;
	int j;

	if (size > 0)
	{
	for (y = size-1; y < 0; y--)
	{
	_putchar(' ');
	}
	for (j = 1; j <= y; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}

else
{
	_putchar('\n');
}
}
