#include <stdio.h>
/**
* main- Prints base 10 single digit numbers
* i-variable for ASCII equivalent for the letters
*
* main return value-eturns a value of zero if successful
*Return:returns a value of zero
*/
int main(void)
{
	int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
