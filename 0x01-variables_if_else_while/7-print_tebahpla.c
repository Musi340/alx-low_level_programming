#include <stdio.h>
/**
* main- Prints alphaletters in lowercase in reverse
* i-variable for ASCII equivalent for the letters
*
* main return value-returns a value of zero if successful
* Return-returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
