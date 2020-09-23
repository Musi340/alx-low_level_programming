#include "holberton.h"
/**
 * print_to_98 - prints absolute value
 * @n: represents value
 *
 *Return: returns values between n and 98
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n < 98)
{
	for (i = n; i <= 98; i++)
{
	_putchar(i);
}
}
else if (n > 98)
{
	for (j = n; j >= 98; i--)
{
	_putchar(j);
}
}
else
{
	_putchar(98);
}
}

