#include <stdio.h>
/**
 * main - prints name of file
 * @argc:number of command line arguments
 * @argv:string array of command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
