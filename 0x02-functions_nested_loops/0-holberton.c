#include "holberton.h"
/**
* main- print Holberton
*_putchar - writes the character c to stdout
* Description: printing Holberton
*
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	char c[10] = "Holberton";
	int i;

	for (i = 0; i < c[10]; i++)
	_putchar(c[i]);
	return (0);
}
