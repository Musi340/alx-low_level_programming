#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: string to be concatenated to s1
 * @n: n bytes of s2 to be concatenated to s1
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	int j;
	unsigned int k;
	int m;

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
	if (k <= n)
	ptr[m] = s2[k];
	}
	ptr[m] = '\0';
	return (ptr);
}
