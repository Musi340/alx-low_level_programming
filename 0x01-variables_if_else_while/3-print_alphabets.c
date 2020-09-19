#include <stdio.h>
/**
*main- Prints alphaletters in lowercase and uppercase
*i-variable for ASCII equivalent for the lowercase letters
*i-variable for ASCII equivalent for the lowercase letters
*
*main return value- returns zero if program is successful
*Return:returns a value of zero
*/
int main(void)
{
	int i;
	int c;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
