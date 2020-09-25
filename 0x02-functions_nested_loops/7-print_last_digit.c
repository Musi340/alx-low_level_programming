#include "holberton.h"
/**
 *  print_last_digit - prints last digit
 * @y: represents value
 *
 *Return: last digit
 */
int print_last_digit(int y)
{
	int result = y % 10;

	if (result < 0)
{
	result = result * (-1);
}
	_putchar('0' + result);
	return (result);
}

