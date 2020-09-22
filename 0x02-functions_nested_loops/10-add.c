#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
/**
 *  add - prints absolute value
 * @w: represents value
 * @y: represents value
 *
 *Return: returns sum
 */
int add(int w, int y)
{
	int z;
	int result;

	z = w + y;
	result = z;
	return (result);
}

