#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
/**
 *  _abs - prints absolute value
 * @x: represents value
 *
 *Return: absolute valu
 */
int _abs(int x)
{
	int result;
if (x < 0)
{	int w;
	w = (-1 * x);
	result = w;
}
else
{
	result = x;
}
	return (result);
}

