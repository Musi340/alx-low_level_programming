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

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i - 1;
	}
	if (j % 2 != 0)
	{
		j = j + 1;
	}
	for (m = j / 2; m <= j; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
