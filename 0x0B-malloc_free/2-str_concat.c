#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to memory space
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;
	int m;
	int k;

	if (s1 == 0)
	s1 = "";
	if (s2 == 0)
	s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	i--;
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	j--;
	ptr = malloc(((i + j) + 1) * sizeof(char));
	if (ptr == 0)
	return (0);
	for (m = 0; s1[m] != '\0'; m++)
	{
		ptr[m] = s1[m];
	}
	for (k = 0; s2[k] != '\0'; k++, m++)
	{
		ptr[m] = s2[k];
	}
	ptr[m] = '\0';
	return (ptr);
}
