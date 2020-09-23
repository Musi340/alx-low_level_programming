#include "holberton.h"
/**
 *  _abs - prints absolute value
 * @x: represents value
 *
 *Return: absolute value
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

