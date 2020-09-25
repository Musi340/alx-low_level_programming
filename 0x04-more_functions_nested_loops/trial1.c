#include <stdio.h>
int main(void)
{
	int i;
	int size = 4;
	int j;
	
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
