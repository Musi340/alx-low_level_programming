#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
/**
 *  print_last_digit - prints last digit
 * @y: represents value
 *
 *Return: absolute valu
 */
int print_last_digit(int y)
{
	int f;
	int g;
	int result;

	f = y % 10;
	if (f < 0)
	{
	g = -1 * f;
	result = g;
	}
	else if (f == 0)
	{
	result = f;
	}
	else
	{
	result = f;
	}
	return (result);
}

