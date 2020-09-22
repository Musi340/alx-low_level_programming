#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	times_table();
	return (0);
}
void times_table(void)
{
	int i;
	int j;
	int x;
	
	for(i = 48; i <= 57; i++)
{	
	for(j = 48; j <= 57; j++)
{
	x = (i*j);
	_putchar(x);
}
	_putchar('\n');
}
}
