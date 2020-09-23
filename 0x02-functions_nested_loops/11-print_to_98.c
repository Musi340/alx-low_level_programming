#include <stdio.h>
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
	if (i != 98)
	printf("%d, ", i);
	else
	printf("%d", i);
}
	printf("\n");
}
else if (n > 98)
{
	for (j = n; j >= 98; j--)
{
	if (j != 98)
	printf("%d, ", j);
	else
	printf("%d", j);
}
	printf("\n");
}
else
{
	printf("%d", 98);
}
	printf("\n");
}

