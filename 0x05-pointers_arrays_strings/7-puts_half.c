#include "holberton.h"
/**
 * puts_half - Prints half of characters in a string
 * @str:the string to be printed
 *
 */
void puts_half(char *str)
{
	int i;
	int m;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i--;
	if (i % 2 != 0)
	{
		i = i + 1;
	}
	for (m = i / 2; m <= i + 1; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
