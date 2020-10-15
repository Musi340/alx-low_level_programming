#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the element in bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
	return (0);
	for (i = 0; i < (nmemb * size); i++)
	{
	*(ptr + i) = 0;
	}
	return (ptr);
}
