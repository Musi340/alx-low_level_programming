#include "holberton.h"
/**
 *  times_table - checks for the alphabet in lowercase and uppercase
 *
 *Return: 1 is lowercase or uppercase letter and 0 if not
 */
void times_table(void)
{
	int i;
	int j;
	int x;
	//int z;
	int a;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = (i * j);
			if (x > 9)
			{
				a = (x % 10);
				b = (x / 10);
				
				if (j != 0 && j <= 9)
				{
				_putchar(',');
				_putchar(' ');
				}
				_putchar('0' +  b);
				_putchar('0' +  a);
			}
			else
			{
				
				if (j != 0 && j <= 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' +  x);
		}
		}
		_putchar('\n');
	}
}

