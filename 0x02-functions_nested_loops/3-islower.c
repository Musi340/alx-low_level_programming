#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c);
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
int _islower(int c)
{
	int result;
	if (c >= 97 && c<= 122)
{
	result = 1;
}
	else
{
	result = 0;
}
	return result;
}
