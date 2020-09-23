#include "holberton.h"
/**
 *  print_sign - checks for sign of numbers
 * @n:value to be checked
 *
 *Return: 1 if positive,-1 if negative and 0 if 0
 */
int print_sign(int n)
{
	int result;
if (n < 0)
{
	_putchar('-');
	result = -1;
}
else if (n > 0)
{
	_putchar('+');
	result = 1;
}
else
{
	_putchar('0');
	result = 0;
}
	return (result);
}

