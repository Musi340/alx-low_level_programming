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

	for (y = '0'; y <= '9'; y++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
