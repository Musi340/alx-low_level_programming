#include <stdio.h>
#include "holberton.h"
/**
 * *_strcat - check the code for Holberton School students.
 * @dest: String to be appended to
 * @src: string to be appended
 * @n: bytes to be considered
 *
 * Return: returns dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k = (sizeof(int));

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (j * k < n)
		dest[i] = src[j];
	}
	if (j * k < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
