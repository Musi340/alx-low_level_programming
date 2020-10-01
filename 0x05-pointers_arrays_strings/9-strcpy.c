#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy - Prints half of characters in a string
 * @dest:the string to be printed
 * @src:the string to be printed
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	i = i - 1;
	for (j = 0; j <= i; j++)
	{
	dest[j] = *(src + j);
	}
	dest[j + 1] = '\0'; 
	return (dest);
}
