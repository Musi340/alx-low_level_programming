#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<unistd.h>
#include "holberton.h"
/**
 * main - copies contents of one file too another file
 * @ac: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 1 on success and -1 on failure.
 */
int main(int ac, char **argv)
{
	int k;
	char *m;
	int j;
	int c;
	int d;
	int l;
	/*Checks number of arguments*/
	if (ac != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}
	m = malloc(1024 * sizeof(char));
	if (m == 0)
	return (0);
	k = open(argv[2], O_RDWR | O_APPEND | O_CREAT, 0664);
	c = open(argv[1], O_RDWR);
	d = read(c, m, 1024);
	/*Checks whether filefrom can be read*/
	if (d == -1)
	{
	dprintf(2, "Can't read from  %s\n", argv[1]);
	exit(98);
	}
	j = write(k, m, 1024);
	/*Checks whether fileto can be written*/
	if (j == -1)
	{
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	l = close(k);
	if (l == -1)
	{
	dprintf(2, "Error: Can't close fd %d\n", k);
	exit(100);
	}
	return (0);
}
