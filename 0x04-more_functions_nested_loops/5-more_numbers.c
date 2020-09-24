#include "holberton.h"
/**
*more_numbers - prints 0-14 10 times
*
*/
void more_numbers(void)
{
	int j;
	int z;
	int y;
	int a;

	for (y = 0; y <= 10; y++)
	{
		for (j = 0; j <= 14; j++)
		{
			z = j;
			if (j > 9)
			{
				a = j % 10;
				z =  a;
				_putchar('1');
			}
	_putchar('0' + z);
	}
		_putchar('\n');
	}
}
