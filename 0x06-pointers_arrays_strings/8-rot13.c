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
	int m;
	char u[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[i] == u[m])
			{
				s[i] = l[m];
				break;
			}
		}
	}
	return (s);
}
