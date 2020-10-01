#include "holberton.h"
/**
 * puts_half - Prints half of characters in a string
 * @str:the string to be printed
 *
 */
void puts_half(char *str)
{
	int i;
	int j;
	int m;
	int n;
	int v;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = i - 1;
	if (j % 2 != 0)
	{
		v = j + 1;
		m = v / 2;
	for (n = m; n <= j; n++)
	{
		_putchar(str[n]);
	}
	}
	else
	{
	m = j / 2;
	for (n = m + 1 ; n <= j; n++)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
