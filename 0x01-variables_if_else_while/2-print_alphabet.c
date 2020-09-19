#include <stdio.h>
/**
*main- Prints alphaletters in lowercase
*i-variable for ASCII equivalent for the letters
*main return value- returns 0 if successful
*
*Return:returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
}
	putchar('\n');
	return (0);
}
