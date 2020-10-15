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

	if (nmemb == 0 || size == 0)
	return (0);
	ptr = malloc((nmemb * size) + 1);
	if (ptr == 0)
	return (0);
	return (ptr);
}
