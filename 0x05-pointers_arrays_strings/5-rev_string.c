#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s:string to be reversed
 *
 */
void rev_string(char *s)
{
	int i;
	int k;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (k = 0; k < i; i--,k++)
	{
		c = s[i];
		s[i] = s[k];
		s[k] = c;
	}
	
}
