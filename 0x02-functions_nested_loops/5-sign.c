#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
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

