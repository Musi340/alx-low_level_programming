#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
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
/**
 *  _islower - checks for the letters of the alphabet in lowercase
 * @c: represents ascii value of characters
 *
 *Return: 1 is lowercase letter and 0 if not
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
{
	result = 1;
}
	else
{
	result = 0;
}
	return (result);
}

