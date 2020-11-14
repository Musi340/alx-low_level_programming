#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include "holberton.h"
/**
 * read_textfile - reads textfile and prints to stdout
 * @filename: file to be read from
 * @letters: NUmner of characters to be read
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	char *b;
	size_t m;
	int n;

	b = malloc(letters + 1 * sizeof(char));
	if (filename == 0)
	return (0);
	k = open(filename, O_RDONLY);
	if (k == -1)
	return (0);
	/*reads letters from k to b*/
	m = read(k, b, letters);
	/*writes m from b to 1*/
	n = write(1, b, m);
	if (n == -1)
	return (0);
	return (n);
}
