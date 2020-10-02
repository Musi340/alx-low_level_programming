#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: String to be appended to
 * @src: string to be appended
 * @n:number of characters to be printed from src
 *
 * Return: returns dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; ++j)
	{
	dest[j] = src[j];	
	}
	if (j < n)
	{
	dest[j] = '\0';
	}
	return (dest);
}
