#include "holberton.h"
/**
 * string_toupper- changes all lowercase letters to uppercase
 * @s: the string to be checked
 *
 * Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	int i;
	char j;

	for (i = 0; s[i] != '\0'; ++i)
	{
	for (j = 'a'; j < 'z'; j++)
	{
	if (s[i] == j)
	{
	s[i] = s[i] - 32;
	}
	}
	}
	return (s);
}
