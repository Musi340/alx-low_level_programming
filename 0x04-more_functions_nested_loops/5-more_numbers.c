#include "holberton.h"
/**
*more_numbers - prints 0-14 10 times
*
*/
void more_numbers(void)
{
	int i = 1;
	int j;
	int z;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			_putchar(z);
		}
		for (j = '0'; j <= '4'; j++)
		{
			_putchar('0' + i);
			_putchar(j);
		}
		_putchar('\n');
	}
}
