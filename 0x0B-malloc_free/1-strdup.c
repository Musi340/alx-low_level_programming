#include <stdlib.h>
/**
 * _strdup - creates an array of characters
 * @str: the size of the array
 *
 * Return: pointer to memory space
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (*str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	len++;
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == 0)
	return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
	ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
