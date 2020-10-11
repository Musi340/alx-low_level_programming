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
	int sum;
	
	sum = 0;
	if (argc == 1)
	{	
		printf("0\n");
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if ((atoi(argv[i])))
			{	
				sum += atoi(argv[i]);
			}
			else
			{ 
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
