#include "holberton.h"
/**
 *  jack_bauer - prints time throughout the day
 *
 *Return: absolute value
 */
void jack_bauer(void)
{
	int i;
	int j;
	int z;
	int y;

	for (y = 0; y <= 2; y++)
{
	for (z = 0; z <= 9; z++)
{
	for (j = 0; j <= 5; j++)

{
	for (i = 0; i <= 9; i++)
{
	if (!(y >= 2 && z >= 4 && j >= 0 && i >= 0))
{
	_putchar('0' + y);
	_putchar('0' + z);
	_putchar(':');
	_putchar('0' + j);
	_putchar('0' + i);
	_putchar('\n');
}
}
}
}
}
}
