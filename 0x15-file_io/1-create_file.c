#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<unistd.h>
#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: string to be written to file
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int k;
	int m;
	int n;

	if (filename == 0)
	return (-1);
	k = open(filename, O_RDWR | O_TRUNC, 0600);
	if (k == -1)
	return (-1);
	/*writes from text_content to k*/
	m = strlen(text_content);
	n = write(k, text_content, m);
	if (n == -1)
	return (-1);
	close(k);
	return (1);
}
