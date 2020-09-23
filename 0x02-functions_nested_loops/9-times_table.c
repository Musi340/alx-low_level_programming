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
	
	for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
{
	x = (i * j);
	_putchar(x);
}
	_putchar('\n');
}
}

