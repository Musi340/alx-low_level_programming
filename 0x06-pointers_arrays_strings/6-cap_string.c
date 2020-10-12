#include "holberton.h"
/**
 * cap_string- cpitalizes all first letters of words
 * @s: the string to be checked
 *
 * Return: the string in uppercase
 */
char *cap_string(char *s)
{
	int i;
	char j[14] = {',', ';', '.', '!', '?',
	 '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	char m;
	int k;

	for (i = 0; s[i] != '\0'; ++i)
	{
	if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
	{
	s[i] = s[i] - 32;
	}
	else
	{
		for (k = 0; k < 14; k++)
		{
			if (s[i] == j[k])
			{
				for (m = 'a'; m <= 'z'; m++)
				{
					if (s[i + 1] == m)
					{
					s[i + 1] = s[i + 1] - 32;
					}
				}
			}
		}
	}
	}
	return (s);
}
