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

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr ==  NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
