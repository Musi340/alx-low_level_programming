#include "holberton.h"
/**
 * rot13- encodes a string in rot13 format
 * @s: the string to be checked
 *
 * Return: the string in uppercase
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
	{
		s[i] = s[i] - 13;
	}
	else if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
	{
		s[i] = s[i] + 13;
	}
	}
	return (s);
}
