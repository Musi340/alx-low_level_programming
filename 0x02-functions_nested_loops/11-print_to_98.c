#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
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
