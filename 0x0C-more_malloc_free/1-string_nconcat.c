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
	char *ptr1;
	int i;
	int j;
	unsigned int k;
	int m;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	ptr = malloc(((i + j) + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	ptr1 = ptr;
	for (m = 0; s1[m] != '\0'; ++m)
	{
		ptr[m] = s1[m];
	}
	for (k = 0; s2[k] != '\0'; k++, m++)
	{
		if (n == 0)
		ptr[0] = s2[0];
		else if (k < n)
		ptr[m] = s2[k];
	}
	ptr[m] = '\0';
	return (ptr1);
}
