#include <stdio.h>
#include <ctype.h>
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
	int sum;
	int i;
	int j;

	sum = 0;
	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
				printf("Error\n");
				return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
