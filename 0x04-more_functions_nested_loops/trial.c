#include <stdio.h>
int main(void)
{
	int i;
	int size = 4;
	int y;
	
	for (i = 1; i <= size; i++)
	{
		for (y = 1; y <= size - i; y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
