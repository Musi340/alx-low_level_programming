#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main- perform arithmetic operation on arguments
 * @argc: The number of arguments
 * @argv: The string array of the arguments
 *
 * Return: if successful return 0
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);
	int m;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	m = result((atoi(argv[1])), (atoi(argv[3])));
	printf("%d\n", m);
	return (0);
}
