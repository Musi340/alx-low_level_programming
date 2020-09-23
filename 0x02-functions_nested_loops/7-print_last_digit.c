#include "holberton.h"
/**
 *  print_last_digit - prints last digit
 * @y: represents value
 *
 *Return: last digit
 */
int print_last_digit(int y)
{
	int result;
	int f;
	int g;
	f = y % 10;

	if (f < 0)
{
	g = ((-1) * f);
	result = g;
}
else
{
	result = f;
}
	return (result);
}

