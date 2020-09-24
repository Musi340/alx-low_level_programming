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
	int i;

	if (size > 0)
	{
	for(i = 1; i <= size; i++)
	{
	for (y = 1; y <= size - i; y++)
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	
	}

else
{
	_putchar('\n');
}
}
