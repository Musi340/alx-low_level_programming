#include "holberton.h"
/**
 * leet- encodes a string into 1337
 * @s: the string to be checked
 *
 * Return: the string in uppercase
 */
char *leet(char *s)
{
	char y[11] = "aAeEoOtTlL";
	char x[11] = "4433007711";
	int k;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (y[k] == s[i])
			{
				s[i] = x[k];
			}
		}
	}
	return (s);
}
