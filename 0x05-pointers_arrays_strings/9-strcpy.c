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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	return (dest);
}
