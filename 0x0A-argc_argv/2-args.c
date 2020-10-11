#include <stdio.h>
/**
 * main - prints name of file
 * @argc:number of command line arguments
 * @argv:string array of command line arguments
 *
 * Description: prints all arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
