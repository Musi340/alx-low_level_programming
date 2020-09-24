#include "holberton.h"
/**
* print_diagonal - prints \ n times
*@n: number of times to print
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

