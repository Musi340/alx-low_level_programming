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
	int a;
	int c;

	for (i = 48; i < 58; i++)
{
	putchar(i);
}
	for (c = 49; c < 58; i++)
{
	for (a = 48; a < 58; i++)
{
	putchar(c);
	putchar(a);	
}
}	
	putchar(',');

putchar('\n');
return (0);
}
