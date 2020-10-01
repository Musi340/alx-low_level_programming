#include <stdio.h>
#include "holberton.h"
/**
 * *_strcat - check the code for Holberton School students.
 * @*dest: String to be appended to 
 * @*src: string to be appended
 *
 * Return: returns dest pointer 
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++,i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
