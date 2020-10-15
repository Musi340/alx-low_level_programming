#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: character the array is intialized to
 *
 * Return: NULL if size is 0 or it fails
 * or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
	return (0);
	}
	p = malloc(size * sizeof(c));
	if (p == 0)
	{
	return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		p[i] = c;
		}
		return (p);
	}
}
