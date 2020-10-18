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
	if (str == 0)
	{
		return (0);
	}
	while (*str != '\0')
	{
	i++;
	*str++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == 0)
	return (0);
	while (*str != '\0')
	{
	*ptr = *str;
	*str++;
	*ptr++;
	}
	*ptr = '\0';
	return (ptr);
	free(ptr);
}
