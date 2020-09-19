#include <stdio.h>
/**
*main- Prints alphaletters in lowercase except q and e
*i-variable for ASCII equivalent for the letters
*
*main return value-returns a value of zero
*Return:returns a value of zero
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
{
	if (i != 'q' && i != 'e')
		putchar(i);
}
	putchar('\n');
	return (0);
}
