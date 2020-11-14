#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
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
	int k, j, c, d, l, n;
	char m[1024];

	d = 1;
	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	k = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (k == -1)
	{
	dprintf(STDERR_FILENO, "Can't read from  %s\n", argv[1]);
	exit(99);
	}
	c = open(argv[1], O_RDWR);
	while (d > 0)
	{
		d = read(c, m, 1024);
		if (c == -1 || d == -1)
		{
		dprintf(STDERR_FILENO, "Can't read from  %s\n", argv[1]);
		exit(98);
		}
		j = write(k, m, d);
		if (j == -1 || j != d)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	l = close(k);
	n = close(c);
	if (l == -1 || n == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", k);
	exit(100);
	}
	return (0);
}
