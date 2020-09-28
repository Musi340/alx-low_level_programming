#include "holberton.h"
/**
 *  print_rev- prints a string in reverse
 * @s:string to be printed
 *
 */
void print_rev(char *s)
{
	int i;
	int j;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = i + 1;
	}
	for (k = j; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
