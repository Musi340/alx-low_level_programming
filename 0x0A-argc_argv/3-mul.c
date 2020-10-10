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
	int mult;

	if (argc == 3)
	{
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	}
	else
	{
	printf("Error\n");
	}
	return (0);
}
