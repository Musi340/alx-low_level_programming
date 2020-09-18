#include <stdio.h>
/**
* main- Prints base 16 numbers in lowercase
* i-variable for ASCII equivalent for the letters
*
* main return value-returns a value of zero
* Return-returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(i);
}
	for (i = 'a'; i < 'g'; i++)
{
	putchar(i);
}
	printf('\n');
	return (0);
}
