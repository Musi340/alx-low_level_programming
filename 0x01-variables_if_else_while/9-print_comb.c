#include <stdio.h>
/**
* main- Prints all combinations of single-digit numbers
* i-variable for ASCII equivalent for the letters
*
* main return value-returns a value of zero
* Return-returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
{
	putchar(i);
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
