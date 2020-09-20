#include <stdio.h>
/**
* main- Prints all combinations of single-digit numbers
* i-variable for ASCII equivalent for the letters
*
* main return value-returns a value of zero
*Return:returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(i % 10 + '0');
	if (i < 9)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
