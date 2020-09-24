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
		for (y = 1; y <= size; y++)
		{
			for (j = 1; j <= y; j++)
			{
				while (j < size)
				{
					_putchar(' ');
					j++;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
