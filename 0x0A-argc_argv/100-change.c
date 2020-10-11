#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of file
 * @argc:number of command line arguments
 * @argv:string array of command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int x;
	int k;
	int mycents[6] = {25, 10, 5, 2, 1};
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	if (atoi(argv[1]) < 0)
	{
	printf("0\n");
	}
	else
	{
	k = atoi(argv[1]);
		for (int i = 0; i < 5; i++)
		{
			x = k / mycents[i];
			sum += x;
			k = k % mycents[i];
		}
		printf("%d\n", sum);
	}
	}
}
