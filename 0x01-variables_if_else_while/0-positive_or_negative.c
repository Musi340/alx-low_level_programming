#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-Print number status,if the number is negative,positive or equal to 0
*n:number to be checked
*
*Return:return 0 at the end
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
